/*******************************************************************\

Module: Solvers for VCs Generated by Symbolic Execution of ANSI-C

Author: Daniel Kroening, kroening@kroening.com

\*******************************************************************/

#include <memory>
#include <iostream>

#include <solvers/sat/satcheck.h>
#include <solvers/sat/satcheck_minisat2.h>

#include <solvers/refinement/bv_refinement.h>
#include <solvers/smt1/smt1_dec.h>
#include <solvers/smt2/smt2_dec.h>
#include <solvers/cvc/cvc_dec.h>
#include <util/time_stopping.h>

#include <solvers/prop/aig_prop.h>

#include "bmc.h"
#include "bv_cbmc.h"
#include "counterexample_beautification.h"
#include "version.h"
#include "eog.h"
#include <iostream>
#include <iomanip>
#include <vector>

static time_periodt build_eog_time = current_time() - current_time();
/*******************************************************************\

Function: bmct::get_smt1_solver_type

  Inputs: None

 Outputs: An smt1_dect::solvert giving the solver to use.

 Purpose: Uses the options to pick an SMT 1.2 solver

\*******************************************************************/

smt1_dect::solvert bmct::get_smt1_solver_type() const
{
	assert(options.get_bool_option("smt1"));
	
	smt1_dect::solvert s = smt1_dect::GENERIC;
	
	if(options.get_bool_option("boolector"))
		s = smt1_dect::BOOLECTOR;
	else if(options.get_bool_option("mathsat"))
		s = smt1_dect::MATHSAT;
	else if(options.get_bool_option("cv3"))
		s = smt1_dect::CVC3;
	else if(options.get_bool_option("cv4"))
		s = smt1_dect::CVC4;
	else if(options.get_bool_option("opensmt"))
		s = smt1_dect::OPENSMT;
	else if(options.get_bool_option("yices"))
		s = smt1_dect::YICES;
	else if(options.get_bool_option("z3"))
		s = smt1_dect::Z3;
	else if(options.get_bool_option("generic"))
		s = smt1_dect::GENERIC;
	
	return s;
}

/*******************************************************************\

Function: bmct::get_smt2_solver_type

  Inputs: None

 Outputs: An smt2_dect::solvert giving the solver to use.

 Purpose: Uses the options to pick an SMT 2.0 solver

\*******************************************************************/

smt2_dect::solvert bmct::get_smt2_solver_type() const
{
	assert(options.get_bool_option("smt2"));
	
	smt2_dect::solvert s = smt2_dect::GENERIC;
	
	if(options.get_bool_option("boolector"))
		s = smt2_dect::BOOLECTOR;
	else if(options.get_bool_option("mathsat"))
		s = smt2_dect::MATHSAT;
	else if(options.get_bool_option("cv3"))
		s = smt2_dect::CVC3;
	else if(options.get_bool_option("cv4"))
		s = smt2_dect::CVC4;
	else if(options.get_bool_option("opensmt"))
		s = smt2_dect::OPENSMT;
	else if(options.get_bool_option("yices"))
		s = smt2_dect::YICES;
	else if(options.get_bool_option("z3"))
		s = smt2_dect::Z3;
	else if(options.get_bool_option("generic"))
		s = smt2_dect::GENERIC;
	
	return s;
}

/*******************************************************************\

Function: bmct::solver_factory

  Inputs:

 Outputs:

 Purpose: Decide using "default" decision procedure

\*******************************************************************/

prop_convt *bmct::solver_factory()
{
	//const std::string &filename=options.get_option("outfile");
	
	if(options.get_bool_option("boolector"))
	{
	}
	else if(options.get_bool_option("mathsat"))
	{
	}
	else if(options.get_bool_option("cvc"))
	{
	}
	else if(options.get_bool_option("dimacs"))
	{
	}
	else if(options.get_bool_option("opensmt"))
	{
	}
	else if(options.get_bool_option("refine"))
	{
	}
	else if(options.get_bool_option("aig"))
	{
	}
	else if(options.get_bool_option("smt1"))
	{
	}
	else if(options.get_bool_option("smt2"))
	{
	}
	else if(options.get_bool_option("yices"))
	{
	}
	else if(options.get_bool_option("z3"))
	{
	}
	else
	{
		// THE DEFAULT

#if 0
		// SAT preprocessor won't work with beautification.
    if(options.get_bool_option("sat-preprocessor") &&
       !options.get_bool_option("beautify"))
    {
      solver=std::auto_ptr<propt>(new satcheckt);
    }
    else
      solver=std::auto_ptr<propt>(new satcheck_minisat_no_simplifiert);

    solver->set_message_handler(get_message_handler());
      
    bv_cbmct bv_cbmc(ns, *solver);
      
    if(options.get_option("arrays-uf")=="never")
      bv_cbmc.unbounded_array=bv_cbmct::U_NONE;
    else if(options.get_option("arrays-uf")=="always")
      bv_cbmc.unbounded_array=bv_cbmct::U_ALL;
#endif
	}
	
	return 0;
}

/*******************************************************************\

Abstraction Refinement Main Function

Function: bmct::decide_default

  Inputs:

 Outputs:

 Purpose: Decide using "default" decision procedure

\*******************************************************************/

bool bmct::decide_default()
{
	bool result=true;
	
	std::auto_ptr<propt> solver;
	
	time_periodt solve_time = current_time() - current_time();
	
	// SAT preprocessor won't work with beautification.
	if(options.get_bool_option("sat-preprocessor") &&
	   !options.get_bool_option("beautify"))
	{
		solver=std::auto_ptr<propt>(new satcheckt);
	}
	else
		solver=std::auto_ptr<propt>(new satcheck_minisat_no_simplifiert);
	
	solver->set_message_handler(get_message_handler());
	
	bv_cbmct bv_cbmc(ns, *solver);
	
	if(options.get_option("arrays-uf")=="never")
		bv_cbmc.unbounded_array=bv_cbmct::U_NONE;
	else if(options.get_option("arrays-uf")=="always")
		bv_cbmc.unbounded_array=bv_cbmct::U_ALL;
	
	// compute the init constraint
	exprt init_cons;
	compute_init_constraint(bv_cbmc, init_cons);
	bv_cbmc.set_to_true(init_cons);
	
	absolute_timet t2=current_time();
	decision_proceduret::resultt rrt = run_decision_procedure(bv_cbmc);
	solve_time += current_time() - t2;
	
	time_periodt constraint_compute_time = current_time() - current_time();
	time_periodt evaluation_time = current_time() - current_time();
	int num = 0;
	switch(rrt)
	{
		case decision_proceduret::D_UNSATISFIABLE:
			result=false;
			report_success();
			break;
		
		case decision_proceduret::D_SATISFIABLE:
		{
			exprt constraint;
			eog graph;
			add_all_nodes(graph);
			bool true_counterexample = is_true_counterexample(bv_cbmc, graph);
			
			while(!true_counterexample) {
				std::cout << "================= Refine " << num++ << " =================\n";
				
				absolute_timet t1=current_time();
				compute_refine_constraint(graph, constraint);
				constraint_compute_time += current_time() - t1;

//		std::cout << from_expr(equation.ns, "", constraint) << "\n";
				
				// incremental algorithm
				absolute_timet t2=current_time();
				decision_proceduret::resultt rt = incremental_solve(bv_cbmc, constraint);
				solve_time += current_time() - t2;
				
				// non-incremental algorithm
//		bmc_constraints.push_back(constraint);
//
//		std::auto_ptr<propt> solver1;
//
//		// SAT preprocessor won't work with beautification.
//     	solver1=std::auto_ptr<propt>(new satcheckt);
//		solver1->set_message_handler(get_message_handler());
//
//		bv_cbmct bv_cbmc1(ns, *solver1);
//		decision_proceduret::resultt rt = run_decision_procedure(bv_cbmc1);
				
				if(rt == decision_proceduret::D_UNSATISFIABLE)
				{
					result=false;
					report_success();
					break;
				}
				else if (rt == decision_proceduret::D_SATISFIABLE) {
					absolute_timet t2=current_time();
					true_counterexample = is_true_counterexample(bv_cbmc, graph);
					evaluation_time += current_time() - t2;
					continue;
				}
				else {
					assert(false);
				}
			}
			
			graph.clear();
			std::cout << "########## build eog time: " << build_eog_time << " s#######\n";
			std::cout << "########## compute constraint time: " << constraint_compute_time << " s#######\n";
			std::cout << "########## SAT Solving time: " << solve_time << " s#######\n";
			
			if (result == true) {
				if(options.get_bool_option("beautify"))
					counterexample_beautificationt()(
							bv_cbmc, equation, ns);
				
				error_trace(bv_cbmc);
				report_failure();
			}
			break;
		}
		
		default:
			error() << "decision procedure failed" << eom;
	}
//	std::ofstream out("cega.result", std::ios::app);
//	out << (result ? "SAT" : "UNSAT") << " " << num << " " << solve_time << " " << evaluation_time << " " << constraint_compute_time << " ";
//	out.close();
	return result;
}

/*******************************************************************\

Function: bmct::decide_aig

  Inputs:

 Outputs:

 Purpose: Decide using AIG followed by SAT

\*******************************************************************/

bool bmct::decide_aig()
{
	bool result=true;
	
	std::auto_ptr<propt> sub_solver;
	
	if(options.get_bool_option("sat-preprocessor"))
		sub_solver=std::auto_ptr<propt>(new satcheckt);
	else
		sub_solver=std::auto_ptr<propt>(new satcheck_minisat_no_simplifiert);
	
	aig_prop_solvert solver(*sub_solver);
	
	solver.set_message_handler(get_message_handler());
	
	bv_cbmct bv_cbmc(ns, solver);
	
	if(options.get_option("arrays-uf")=="never")
		bv_cbmc.unbounded_array=bv_cbmct::U_NONE;
	else if(options.get_option("arrays-uf")=="always")
		bv_cbmc.unbounded_array=bv_cbmct::U_ALL;
	
	switch(run_decision_procedure(bv_cbmc))
	{
		case decision_proceduret::D_UNSATISFIABLE:
			result=false;
			report_success();
			break;
		
		case decision_proceduret::D_SATISFIABLE:
			error_trace(bv_cbmc);
			report_failure();
			break;
		
		default:
			error() << "decision procedure failed" << eom;
	}
	
	return result;
}

/*******************************************************************\

Function: bmct::bv_refinement

  Inputs:

 Outputs:

 Purpose: Decide using refinement decision procedure

\*******************************************************************/

bool bmct::decide_bv_refinement()
{
	std::auto_ptr<propt> solver;
	
	// We offer the option to disable the SAT preprocessor
	if(options.get_bool_option("sat-preprocessor"))
		solver=std::auto_ptr<propt>(new satcheckt);
	else
		solver=std::auto_ptr<propt>(new satcheck_minisat_no_simplifiert);
	
	solver->set_message_handler(get_message_handler());
	
	bv_refinementt bv_refinement(ns, *solver);
	
	// we allow setting some parameters
	if(options.get_option("max-node-refinement")!="")
		bv_refinement.max_node_refinement=
				options.get_unsigned_int_option("max-node-refinement");
	
	return decide(bv_refinement);
}

/*******************************************************************\

Function: bmct::decide_smt1

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

bool bmct::decide_smt1()
{
	smt1_dect::solvert solver=get_smt1_solver_type();
	const std::string &filename=options.get_option("outfile");
	
	if(filename=="")
	{
		smt1_dect smt1_dec(
				ns,
				"cbmc",
				"Generated by CBMC " CBMC_VERSION,
				"QF_AUFBV",
				solver);
		
		return decide(smt1_dec);
	}
	else if(filename=="-")
		smt1_convert(solver, std::cout);
	else
	{
		std::ofstream out(filename.c_str());
		if(!out)
		{
			std::cerr << "failed to open " << filename << std::endl;
			return false;
		}
		
		smt1_convert(solver, out);
	}
	
	return false;
}

/*******************************************************************\

Function: bmct::smt1_convert

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void bmct::smt1_convert(smt1_dect::solvert solver, std::ostream &out)
{
	smt1_convt smt1_conv(
			ns,
			"cbmc",
			"Generated by CBMC " CBMC_VERSION,
			"QF_AUFBV",
			solver,
			out);
	
	smt1_conv.set_message_handler(get_message_handler());
	
	do_conversion(smt1_conv);
	
	smt1_conv.dec_solve();
}

/*******************************************************************\

Function: bmct::decide_smt2

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

bool bmct::decide_smt2()
{
	smt2_dect::solvert solver=get_smt2_solver_type();
	const std::string &filename=options.get_option("outfile");
	
	if(filename=="")
	{
		smt2_dect smt2_dec(
				ns,
				"cbmc",
				"Generated by CBMC " CBMC_VERSION,
				"QF_AUFBV",
				solver,
				equation.oclt_type_table);
		
		if(options.get_bool_option("fpa"))
			smt2_dec.use_FPA_theory=true;
		
		return decide(smt2_dec);
	}
	else if(filename=="-")
		smt2_convert(solver, std::cout);
	else
	{
		std::ofstream out(filename.c_str());
		if(!out)
		{
			std::cerr << "failed to open " << filename << std::endl;
			return false;
		}
		
		smt2_convert(solver, out);
	}
	
	return false;
}

/*******************************************************************\

Function: bmct::smt2_convert

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void bmct::smt2_convert(
		smt2_dect::solvert solver,
		std::ostream &out)
{
	
	smt2_convt smt2_conv(
			ns,
			"cbmc",
			"Generated by CBMC " CBMC_VERSION,
			"QF_AUFBV",
			solver,
			out,
			equation.oclt_type_table);
	
	if(options.get_bool_option("fpa"))
		smt2_conv.use_FPA_theory=true;
	
	smt2_conv.set_message_handler(get_message_handler());
	
	do_conversion(smt2_conv);
	
	smt2_conv.dec_solve();
}

void bmct::build_eog(eog& graph, prop_convt &prop_conv)
{
	graph.clear();
	add_nodes(graph, prop_conv);absolute_timet t1=current_time();
	add_program_order(graph, prop_conv);
	build_eog_time += current_time() - t1;
	add_read_from(graph, prop_conv);
}

void bmct::add_all_nodes(eog& graph)
{
	int id = 0;
	for(eventst::iterator
				e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		if ((e_it->is_shared_read() || e_it->is_shared_write() ||
			 e_it->is_spawn() || e_it->is_memory_barrier())) {
			graph.add_all_node(&(*e_it));
			e_it->id = id++;
		}
	}
	graph.init_pa_sons();
}

void bmct::add_nodes(eog& graph, prop_convt &prop_conv, bool trace_flag)
{
	for(eventst::iterator
				e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		if ((e_it->is_shared_read() || e_it->is_shared_write() ||
			 e_it->is_spawn() || e_it->is_memory_barrier()) &&
			(!trace_flag || prop_conv.l_get((*e_it).guard_literal)==tvt(true))) {
			graph.add_node(&(*e_it));
		}
	}
	
	graph.initial_addr_nodes_map();
}

/*******************************************************************\

Function: memory_model_sct::thread_spawn

  Inputs:

 Outputs:

 Purpose:

\*******************************************************************/

void bmct::thread_spawn(
		symex_target_equationt &equation,
		const per_thread_mapt &per_thread_map,
		prop_convt &prop_conv,
		eog& graph, bool trace_flag)
{
	// thread spawn: the spawn precedes the first
	// instruction of the new thread in program order
	
	unsigned next_thread_id=0;
	for(eventst::const_iterator
				e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		if(e_it->is_spawn())
		{
			per_thread_mapt::const_iterator next_thread=
					per_thread_map.find(++next_thread_id);
			if(next_thread==per_thread_map.end() ||
			   (trace_flag && prop_conv.l_get((*e_it).guard_literal)!=tvt(true)))
				continue;
			
			event_listt::const_iterator n_it=next_thread->second.begin();
			
			for( ;n_it!=next_thread->second.end() &&
				  !(*n_it)->is_shared_read() &&
				  !(*n_it)->is_shared_write();
				  ++n_it)
				;
			
			if (n_it!=next_thread->second.end()) {
				graph.add_edge(&(*e_it), &(*(*n_it)), edge::PO);
			}
		}
	}
}

void bmct::add_program_order_back1(eog& graph, prop_convt &prop_conv)
{
	per_thread_mapt per_thread_map;
	
	// build per_thread_map
	for(eventst::const_iterator
				e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		// concurreny-related?
		if(!e_it->is_shared_read() &&
		   !e_it->is_shared_write() &&
		   !e_it->is_spawn() &&
		   !e_it->is_memory_barrier()) continue;
		
		if (prop_conv.l_get((*e_it).guard_literal)!=tvt(true))
			continue;
		
		per_thread_map[e_it->source.thread_nr].push_back(e_it);
	}
	
	thread_spawn(equation, per_thread_map, prop_conv, graph);
	
	// iterate over threads
	for(per_thread_mapt::const_iterator
				t_it=per_thread_map.begin();
		t_it!=per_thread_map.end();
		t_it++)
	{
		const event_listt &events=t_it->second;
		
		// iterate over relevant events in the thread
		event_it previous=equation.SSA_steps.end();
		
		for(event_listt::const_iterator
					e_it=events.begin();
			e_it!=events.end();
			e_it++)
		{
			if((*e_it)->is_memory_barrier())
				continue;
			
			if(previous==equation.SSA_steps.end())
			{
				// first one?
				previous=*e_it;
				continue;
			}
			
			if(previous->atomic_section_id!=0 && previous->atomic_section_id == (*e_it)->atomic_section_id) {
				graph.add_edge(&(*previous), &(*(*e_it)), edge::EPO);
			}
			else {
				graph.add_edge(&(*previous), &(*(*e_it)), edge::PO);
			}
			
			previous=*e_it;
		}
	}
}

bool bmct::valid_mutex(symex_target_equationt &equation)
{
	int mutex_num = 0;
	for(eventst::const_iterator
				e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		// concurreny-related?
		if(e_it->is_verify_atomic_begin())
			mutex_num++;
	}
	return (mutex_num != 1);
}

void bmct::add_program_order(eog& graph, prop_convt &prop_conv, bool trace_flag)
{
	per_thread_mapt per_thread_map;
	std::map<irep_idt, unsigned> thread_map; // <thread_identifier, thread_id> for all threads
	
	// build per_thread_map
	for(eventst::const_iterator
				e_it=equation.SSA_steps.begin();
		e_it!=equation.SSA_steps.end();
		e_it++)
	{
		// concurreny-related?
		if(!e_it->is_shared_read() &&
		   !e_it->is_shared_write() &&
		   !e_it->is_spawn() &&
		   !e_it->is_memory_barrier() &&
		   !e_it->is_verify_atomic_begin() &&
		   !e_it->is_verify_atomic_end() &&
		   !e_it->is_thread_join()) continue;
		
		if ((trace_flag && prop_conv.l_get((*e_it).guard_literal)!=tvt(true)) &&
			!e_it->is_verify_lock() && !e_it->is_verify_unlock() &&
			!e_it->is_thread_join())
			continue;
		
		if (!equation.thread_malloc && equation.aux_enable && e_it->is_aux_var())
			continue;
		
		per_thread_map[e_it->source.thread_nr].push_back(e_it);
	}
	
	thread_spawn(equation, per_thread_map, prop_conv, graph, trace_flag);
	
	bool join_flag = false;
	std::vector<int> unhandled;
	std::map<int, event_it> join_nodes;
	int thr_n = 0;
	
	// iterate over threads
	for(per_thread_mapt::const_iterator
				t_it=per_thread_map.begin();
		t_it!=per_thread_map.end();
		t_it++)
	{
		const event_listt &events=t_it->second;
		bool atomic_flag = false;
		bool start_flag = false;
		bool lock_flag = false;
		bool array_assign = false;
		event_it array_event;
		std::map<irep_idt, event_it> event_value_map;
		unhandled.clear();
		join_flag = false;
		
		// iterate over relevant events in the thread
		event_it previous=equation.SSA_steps.end();
		
		for(event_listt::const_iterator
					e_it=events.begin();
			e_it!=events.end();
			e_it++)
		{
			
			if((*e_it)->is_thread_join())
			{
				join_flag = true;
				if (equation.array_thread_id)
					unhandled.push_back(++thr_n);
				else {
					int thr = equation.thread_id_map[(*e_it)->pthread_join_id];
					unhandled.push_back(thr);
				}
				
				continue;
			}
			
			if((*e_it)->is_memory_barrier())
				continue;
			if ((*e_it)->is_verify_atomic_begin()) {
				if (valid_mutex(equation)) {
					atomic_flag = true;
					if ((*e_it)->is_verify_lock()) {
						event_value_map.clear();
						lock_flag = true;
					}
				}
				continue;
			}
			if ((*e_it)->is_verify_atomic_end()) {
				atomic_flag = false;
				start_flag = false;
				if ((*e_it)->is_verify_unlock()) {
					event_value_map.clear();
					lock_flag = false;
				}
				continue;
			}
			
			if (join_flag && (equation.thread_malloc || !equation.aux_enable || !(*e_it)->is_aux_var()))
			{
				join_flag = false;
				for (unsigned i = 0; i < unhandled.size(); i++) {
					join_nodes[unhandled[i]] = (*e_it);
				}
				unhandled.clear();
			}
			
			if (lock_flag) {
				irep_idt address = (*e_it)->original_lhs_object.get_identifier();
				if ((*e_it)->is_shared_read()) {
					if (event_value_map.find(address) == event_value_map.end()) {
						event_value_map[address] = *e_it;
					}
					else {
						continue;
					}
				}
				else if ((*e_it)->is_shared_write()) {
					event_value_map[address] = *e_it;
				}
			}
			
			if(previous==equation.SSA_steps.end())
			{
				// first one?
				previous=*e_it;
				
				if (atomic_flag && !start_flag)
					start_flag = true;
				
				continue;
			}
			
			if (previous->array_assign)
			{
				array_assign = true;
				array_event = previous;
			}
			
			if((start_flag) || (previous->atomic_section_id!=0 && previous->atomic_section_id == (*e_it)->atomic_section_id) ||
			   array_assign)
			{
				graph.add_edge(&(*previous), &(*(*e_it)), edge::EPO);
			}
			else {
				graph.add_edge(&(*previous), &(*(*e_it)), edge::PO);
			}
			
			if (array_assign && array_event->original_lhs_object.get_identifier() == (*e_it)->original_lhs_object.get_identifier())
			{
				array_assign = false;
			}
			
			if (atomic_flag && !start_flag)
				start_flag = true;
			
			previous=*e_it;
		}
	}
	
	if (!join_nodes.empty()) {
		for(per_thread_mapt::const_iterator
					t_it=per_thread_map.begin();
			t_it!=per_thread_map.end();
			t_it++)
		{
			const event_listt &events=t_it->second;
			if (!events.empty()) {
				event_listt::const_reverse_iterator e_it = events.rbegin();
				for (; e_it != events.rend(); e_it++)
				{
					if (((*e_it)->is_shared_read() || (*e_it)->is_shared_write())
						&& (equation.thread_malloc || !equation.aux_enable || !(*e_it)->is_aux_var()))
					{
						break;
					}
				}
				
				if (e_it != events.rend() && join_nodes.find((*e_it)->source.thread_nr) != join_nodes.end()) {
					graph.add_edge(&(*(*e_it)), &(*join_nodes[(*e_it)->source.thread_nr]), edge::PO);
				}
			}
		}
	}
	
	graph.update_po_sons();
}

void bmct::add_read_from(eog& graph, prop_convt &prop_conv)
{
	typedef symex_target_equationt::choice_symbol_mapt cs_mapt;
	for(cs_mapt::const_iterator
				t_it=equation.choice_symbol_map.begin();
		t_it!=equation.choice_symbol_map.end();
		t_it++)
	{
		symbol_exprt choice = t_it->first;
		symex_target_equationt::eq_edge* eqe = t_it->second;
		if (prop_conv.get(choice).is_true())
		{
			if (!equation.thread_malloc && equation.aux_enable && (eqe->m_src)->is_aux_var())
				continue;
			
			if (prop_conv.l_get(eqe->m_src->guard_literal)!=tvt(true) ||
				prop_conv.l_get(eqe->m_dst->guard_literal)!=tvt(true))
				continue;
			
			edge* e = graph.add_edge(eqe->m_src, eqe->m_dst, edge::RF);
			if (e != NULL)
				equation.edge_symbol_map[e] = choice;
		}
	}
}
extern time_periodt ttt;
bool bmct::is_true_counterexample(prop_convt &prop_conv, eog& graph)
{
	graph.optimize = true;
	build_eog(graph, prop_conv);
	
	std::cout << "add rf time = " << graph.totaltime << "s\n";
	std::cout << "clear time  = " << ttt << "s\n";
	if (graph.no_circle_judge()) {
		graph.optimize = false;
		build_eog(graph, prop_conv);
		return graph.no_circle_judge();
	}
	return false;
}


bool bmct::compute_refine_constraint(eog& graph, exprt& constraint)
{
	graph.compute_all_cycles();
	
	exprt::operandst constraint_operands;
	std::cout << "constraint.size = " << graph.m_reasons.size() << "\n";
	for (unsigned i = 0; i < graph.m_reasons.size(); i++) {
		std::vector<edge*>& reason = graph.m_reasons[i];
		
		exprt::operandst reason_operands;
		for (unsigned j = 0; j < reason.size(); j++) {
			reason_operands.push_back(not_exprt(equation.edge_symbol_map[reason[j]]));
		}
		exprt reason_exprt = disjunction(reason_operands);
		
		constraint_operands.push_back(reason_exprt);
	}
	constraint = conjunction(constraint_operands);

//	std::cout << "reasons.size = " << graph.m_reasons.size() << "\n";
//	for (unsigned i = 0; i < graph.m_reasons.size(); i++) {
//		std::vector<edge*>& reason = graph.m_reasons[i];
//
//		std::cout << reason.size() << ": ";
//		for (unsigned j = 0; j < reason.size(); j++) {
//			std:: cout << equation.edge_symbol_map[reason[j]].get_identifier() << ", ";
//		}
//		std::cout << "\n";
//		for (unsigned j = 0; j < reason.size(); j++) {
//			std::cout << "(" << reason[j]->m_src->m_event->ssa_lhs.get_identifier() << ", ";
//			std::cout << reason[j]->m_dst->m_event->ssa_lhs.get_identifier() << "), ";
//		}
//		std::cout << "\n";
//	}
}


void bmct::compute_init_constraint(prop_convt &prop_conv, exprt& constraint)
{
	eog graph;
	add_all_nodes(graph);
	add_nodes(graph, prop_conv, false);
	add_program_order(graph, prop_conv, false);
	
	int num = 0;
	exprt::operandst constraint_operands;
	typedef symex_target_equationt::choice_symbol_mapt cs_mapt;
	for(cs_mapt::const_iterator i_it=equation.choice_symbol_map.begin();
		i_it!=equation.choice_symbol_map.end(); i_it++)
	{
		auto j_it = i_it;
		j_it++;
		for(; j_it!=equation.choice_symbol_map.end(); j_it++)
		{
			if (i_it->second->m_src != j_it->second->m_src && i_it->second->m_dst != j_it->second->m_dst){
//				std::cout << i_it->first.get_identifier() << " " << j_it->first.get_identifier() << "\n";
				
				symex_target_equationt::eq_edge* rf1 = i_it->second;
				symex_target_equationt::eq_edge* rf2 = j_it->second;
				if (graph.is_son_of(graph.event_node_map[rf1->m_dst], graph.event_node_map[rf2->m_src]) &&
					graph.is_son_of(graph.event_node_map[rf2->m_dst], graph.event_node_map[rf1->m_src]))
				{
					num++;
					
					exprt::operandst operands;
					operands.push_back(not_exprt(i_it->first));
					operands.push_back(not_exprt(j_it->first));
					exprt reason_exprt = disjunction(operands);
					constraint_operands.push_back(reason_exprt);
				}
			}
		}
	}
	
	constraint = conjunction(constraint_operands);
	
	std::cout << equation.choice_symbol_map.size() << " =======\n";
	std::cout << "num = " << num << "\n";
//	std::cout << from_expr(ns, "", constraint) << "\n\n";
	
	graph.clear();
}
