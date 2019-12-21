/*******************************************************************\

Module: Memory model for partial order concurrency

Author: Michael Tautschnig, michael.tautschnig@cs.ox.ac.uk

\*******************************************************************/

#include <util/std_expr.h>
#include <util/i2string.h>

#include "memory_model_sc.h"
#include <iostream>

/*******************************************************************\

Function: memory_model_sct::operator()

  Inputs: 

 Outputs:

 Purpose:

\*******************************************************************/

void memory_model_sct::operator()(symex_target_equationt &equation)
{
	print(8, "Adding SC constraints");
	std::cout << equation.SSA_steps.size() << " steps before adding SC constraints" << "\n";
	
	build_event_lists(equation);
	build_clock_type(equation);
	set_events_ssa_id(equation);
	
	// __FHY_ADD_BEGIN__
	read_from(equation);
	std::cout << equation.SSA_steps.size() << " steps after addressing read_from relations:" << "\n";
//	std::cout << "Original Read_From By Yogar CBMC:\n";
//	for(const auto& it : equation.SSA_steps)
//		it.output(ns, std::cout);
	
//	read_from_backup(equation);
//	std::cout << equation.SSA_steps.size() << " steps after addressing read_from relations: " << "\n";
//	for(const auto& it : equation.SSA_steps)
//		it.output(ns, std::cout);

	write_serialization_external(equation);
	std::cout << equation.SSA_steps.size() << " steps after addressing write sequences relations: " << "\n";
//  	for(const auto& it : equation.SSA_steps)
//  		it.output(ns, std::cout);


  	program_order(equation);
  	std::cout << equation.SSA_steps.size() << " steps after addressing program orders: :" << "\n";
//  	for(const auto& it : equation.SSA_steps)
//  		it.output(ns, std::cout);

//  from_read(equation); std::cout << equation.SSA_steps.size() << " steps" << "\n";
	// __FHY_ADD_END__
}

/*******************************************************************\

Function: memory_model_sct::before

  Inputs: 

 Outputs:

 Purpose:

\*******************************************************************/

exprt memory_model_sct::before(event_it e1, event_it e2)
{
	return partial_order_concurrencyt::before(
			e1, e2, AX_PROPAGATION);
}

/*******************************************************************\

Function: memory_model_sct::program_order_is_relaxed

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

bool memory_model_sct::program_order_is_relaxed(
		partial_order_concurrencyt::event_it e1,
		partial_order_concurrencyt::event_it e2) const
{
	assert(is_shared_read(e1) || is_shared_write(e1));
	assert(is_shared_read(e2) || is_shared_write(e2));
	
	return false;
}

/*******************************************************************\

Function: memory_model_sct::build_per_thread_map

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void memory_model_sct::build_per_thread_map(
		const symex_target_equationt &equation,
		per_thread_mapt &dest) const
{
	// this orders the events within a thread
	
	for(eventst::const_iterator	e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		// concurreny-related?
		if(!is_shared_read(e_it) &&
		   !is_shared_write(e_it) &&
		   !is_spawn(e_it) &&
		   !is_memory_barrier(e_it)) continue;
		
		dest[e_it->source.thread_nr].push_back(e_it);
	}
}

/*******************************************************************\

Function: memory_model_sct::thread_spawn

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/
// __FHY_ADD_BEGIN__
void memory_model_sct::thread_spawn(
		symex_target_equationt &equation,
		const per_thread_mapt &per_thread_map)
{
	// thread spawn: the spawn precedes the first
	// instruction of the new thread in program order
	
	unsigned next_thread_id=0;
	for(eventst::const_iterator
				e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		if(is_spawn(e_it))
		{
			per_thread_mapt::const_iterator next_thread=
					per_thread_map.find(++next_thread_id);
			if(next_thread==per_thread_map.end()) continue;
			
			// For SC and several weaker memory models a memory barrier
			// at the beginning of a thread can simply be ignored, because
			// we enforce program order in the thread-spawn constraint
			// anyway. Memory models with cumulative memory barriers
			// require explicit handling of these.
			event_listt::const_iterator n_it=next_thread->second.begin();
			for(; n_it!=next_thread->second.end() && (*n_it)->is_memory_barrier()
					&& !(*n_it)->is_shared_read() && !(*n_it)->is_shared_write(); ++n_it);
			
			if(n_it!=next_thread->second.end())
				std::cout << "SPAWN PO: (" << (*e_it).ssa_lhs.get_identifier() << ", " << (*n_it)->ssa_lhs.get_identifier() << ") \n";
			add_constraint(equation, before(e_it, *n_it), "thread-spawn", e_it->source);
		}
	}
}
// __FHY_ADD_END__
/*******************************************************************\

Function: memory_model_sct::program_order

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/
// __FHY_ADD_BEGIN__
/*
 * Add two relations:
 * ===POF : belong to  PO ,which contains a "<" relation between a read event and a write event with two condition:
 * 				1.  satisfying (PO wclk rclk)
 * 				2.  the write event is the latest write to the same address.
 *
 * ===COF : belong to  PO ,which contains a "<" relation between two write events with two condition:
 * 				1.  satisfying (PO wclk1 wclk2)
 * 				2.  the write event 1 is the latest write to the same address corresponding to write event 2.
 */
void memory_model_sct::program_order(
		symex_target_equationt &equation)
{
	std::vector<event_listt> po_orders;
	per_thread_mapt per_thread_map;
	build_per_thread_map(equation, per_thread_map);
	
	thread_spawn(equation, per_thread_map);
	
	// iterate over threads
	int num = 0;
	for(per_thread_mapt::const_iterator t_it=per_thread_map.begin();
		t_it!=per_thread_map.end();
		t_it++)
	{
		std::cout << "======== begin thread " << num << "===========\n";
		const event_listt &events=t_it->second;
		event_listt temp_list;
		// iterate over relevant events in the thread
		
		event_it previous=equation.SSA_steps.end();
		
		for(event_listt::const_iterator e_it=events.begin();
			e_it!=events.end();
			e_it++)
		{
			if(is_memory_barrier(*e_it))
				continue;
			
			if(previous==equation.SSA_steps.end())
			{
				// first one?
				previous=*e_it;
				continue;
			}
			
			std::cout << "PO: (" << previous->ssa_lhs.get_identifier()
						<< ", " << (*e_it)->ssa_lhs.get_identifier() << "\n";
			
			auto &function1 = previous->source.pc->function;
			std::string str1 = from_expr(ns, function1, previous->guard);
			auto &function2 = (*e_it)->source.pc->function;
			std::string str2 = from_expr(ns, function2, (*e_it)->guard);
			std::cout << "Guard: " << str1 << ": " << str2 << "\n";
			
			temp_list.emplace_back(*e_it);
			add_constraint(equation, before(previous, *e_it), "po", (*e_it)->source);
			
			previous=*e_it;
		}
		std::cout << "======== end thread " << num++ << "===========\n";
		po_orders.emplace_back(temp_list);
	}
	
	// ADD POF Relation
	for(const auto & event_list : po_orders){
			for(auto e_it = event_list.begin(); e_it != event_list.end(); ++e_it)
		{
			if(!is_shared_write(*e_it))
				continue;
			auto next = e_it;
			next++;
			bool meet_flag = false;
			const a_rect &rec = address_map[address(*e_it)];
			
			for(auto e_it2 = next; e_it2!= event_list.end(); ++e_it2)
			{
				if(!is_shared_read(*e_it2))
					continue;
				for(auto event: rec.reads){
					if(event->ssa_lhs.get_identifier() == (*e_it2)->ssa_lhs.get_identifier())
					{
//						std::cout << "----:" << event->ssa_lhs.get_identifier()
//								<< "  " << (*e_it2)->ssa_lhs.get_identifier() << "\n";
						meet_flag = true;
						break;
					}
				}
				if(meet_flag)
				{
					std::cout << "POF: (" << (*e_it)->ssa_lhs.get_identifier()
							  << ", " << (*e_it2)->ssa_lhs.get_identifier() << ") \n";
					add_constraint(equation, before(*e_it, *e_it2), "pof", (*e_it)->source);
					break;
				}
			}
		}
	}
}
// __FHY_ADD_END__

/*******************************************************************\

Function: memory_model_sct::write_serialization_external

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/
void memory_model_sct::write_serialization_external(
		symex_target_equationt &equation)
{
	bool meet_flag;
	for(address_mapt::const_iterator
				a_it=address_map.begin();
		a_it!=address_map.end();
		a_it++)
	{
		const a_rect &a_rec=a_it->second;
		
		// This is quadratic in the number of writes
		// per address. Perhaps some better encoding
		// based on 'places'?
		for(event_listt::const_iterator w_it1=a_rec.writes.begin();
			w_it1!=a_rec.writes.end();
			++w_it1)
		{
			event_listt::const_iterator next=w_it1;
			++next;
			
			meet_flag = false;
			for(event_listt::const_iterator w_it2=next;
				w_it2!=a_rec.writes.end();
				++w_it2)
			{
				// external?
				if((*w_it1)->source.thread_nr == (*w_it2)->source.thread_nr && !meet_flag)
				{
					meet_flag = true;
					add_constraint(equation, before(*w_it1, *w_it2), "coi", (*w_it1)->source);
					std::cout << "COI: (" << (*w_it1)->ssa_lhs.get_identifier()
							  << ", "<< (*w_it2)->ssa_lhs.get_identifier() << ") \n";
					continue;
				}
				
				// ws is a total order, no two elements have the same rank
				// s -> w_evt1 before w_evt2; !s -> w_evt2 before w_evt1
				
				symbol_exprt s=nondet_bool_symbol("ws-ext");
				
				// write-to-write edge
				add_constraint(
						equation,
						implies_exprt(s, before(*w_it1, *w_it2)),
						"ws-ext",
						(*w_it1)->source);
				
				add_constraint(
						equation,
						implies_exprt(not_exprt(s), before(*w_it2, *w_it1)),
						"ws-ext",
						(*w_it1)->source);
			}
		}
	}
}
/*******************************************************************\

Function: memory_model_sct::from_read

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void memory_model_sct::from_read(symex_target_equationt &equation)
{
	// from-read: (w', w) in ws and (w', r) in rf -> (r, w) in fr
	
	for(address_mapt::const_iterator
				a_it=address_map.begin();
		a_it!=address_map.end();
		a_it++)
	{
		const a_rect &a_rec=a_it->second;
		
		// This is quadratic in the number of writes per address.
		for(event_listt::const_iterator
					w_prime=a_rec.writes.begin();
			w_prime!=a_rec.writes.end();
			++w_prime)
		{
			event_listt::const_iterator next=w_prime;
			++next;
			
			for(event_listt::const_iterator w=next;
				w!=a_rec.writes.end();
				++w)
			{
				exprt ws1, ws2;
				
				if(po(*w_prime, *w) &&
				   !program_order_is_relaxed(*w_prime, *w))
				{
					ws1=true_exprt();
					ws2=false_exprt();
				}
				else if(po(*w, *w_prime) &&
						!program_order_is_relaxed(*w, *w_prime))
				{
					ws1=false_exprt();
					ws2=true_exprt();
				}
				else
				{
					ws1=before(*w_prime, *w);
					ws2=before(*w, *w_prime);
				}
				
				// smells like cubic
				for(choice_symbolst::const_iterator
							c_it=choice_symbols.begin();
					c_it!=choice_symbols.end();
					c_it++)
				{
					event_it r=c_it->first.first;
					exprt rf=c_it->second;
					exprt cond;
					cond.make_nil();
					
					if(c_it->first.second==*w_prime && !ws1.is_false())
					{
						exprt fr=before(r, *w);
						
						// the guard of w_prime follows from rf; with rfi
						// optimisation such as the previous write_symbol_primed
						// it would even be wrong to add this guard
						cond=
								implies_exprt(
										and_exprt(r->guard, (*w)->guard, ws1, rf),
										fr);
					}
					else if(c_it->first.second==*w && !ws2.is_false())
					{
						exprt fr=before(r, *w_prime);
						
						// the guard of w follows from rf; with rfi
						// optimisation such as the previous write_symbol_primed
						// it would even be wrong to add this guard
						cond=
								implies_exprt(
										and_exprt(r->guard, (*w_prime)->guard, ws2, rf),
										fr);
					}
					
					if(cond.is_not_nil())
						add_constraint(equation,
									   cond, "fr", r->source);
				}
				
			}
		}
	}
}

void memory_model_sct::get_symbols(const exprt &expr, std::vector<symbol_exprt>& symbols)
{
	forall_operands(it, expr)
			get_symbols(*it, symbols);
	
	if(expr.id()==ID_symbol)
		symbols.push_back(to_symbol_expr(expr));
}

void memory_model_sct::set_events_ssa_id(symex_target_equationt &equation)
{
	int id = 0;
	for(eventst::iterator
				e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		if(e_it->is_assignment())
		{
			unsigned event_num = 0;
			std::vector<symbol_exprt> symbols;
			get_symbols(e_it->cond_expr, symbols);
			for (unsigned i = 0; i < symbols.size(); i++)
			{
				unsigned result = set_single_event_ssa_id(equation, symbols[i], id);
				event_num += result;
			}
			if (event_num > 0)
				e_it->event_flag = true;
		}
		id++;
	}
}

unsigned memory_model_sct::set_single_event_ssa_id(symex_target_equationt &equation, symbol_exprt event, int id)
{
	for(eventst::iterator
				e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		if ((e_it->is_shared_read() || e_it->is_shared_write()))
		{
			if (e_it->ssa_lhs.get_identifier() == event.get_identifier())
			{
				e_it->appear_ssa_id = id;
				return 1;
			}
		}
	}
	return 0;
}


