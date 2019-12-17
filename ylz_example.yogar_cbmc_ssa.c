This product includes software developed by Daniel Kroening, Edmund Clarke, 
Computer Science Department, University of Oxford 
Computer Science Department, Carnegie Mellon University
CBMC version 4.9 64-bit linux
file ./ylz_example.c: Parsing
Converting
Type-checking ylz_example
Generating GOTO Program
Adding CPROVER library
Function Pointer Removal
Partial Inlining
Generic Property Instrumentation
Starting Bounded Model Checking
--unwind 2
Adding SC constraints
200 steps before adding SC constraints
Shared c::__CPROVER_threads_exited: 4R/3W
Shared c::__CPROVER_next_thread_id: 3R/3W
Shared c::x: 2R/3W
Shared c::y: 2R/3W
Shared c::m: 1R/2W
Shared c::n: 1R/2W
reads num: 13
writes num: 16
269 steps after addressing read_from relations: 
COI: (c::__CPROVER_next_thread_id#1, c::__CPROVER_next_thread_id#2) 
COI: (c::__CPROVER_next_thread_id#2, c::__CPROVER_next_thread_id#5) 
COI: (c::x#2, c::x#3) 
COI: (c::y#4, c::y#5) 
273 steps after addressing coi relation: 
SPAWN PO: (, c::y#2) 
SPAWN PO: (, c::x#4) 
======== begin thread 0===========
PO: (c::__CPROVER_deallocated#1, c::__CPROVER_dead_object#1) 
PO: (c::__CPROVER_dead_object#1, c::__CPROVER_malloc_object#1) 
PO: (c::__CPROVER_malloc_object#1, c::__CPROVER_malloc_size#1) 
PO: (c::__CPROVER_malloc_size#1, c::__CPROVER_malloc_is_new_array#1) 
PO: (c::__CPROVER_malloc_is_new_array#1, c::__CPROVER_memory_leak#1) 
PO: (c::__CPROVER_memory_leak#1, c::__CPROVER_pipe_count#1) 
PO: (c::__CPROVER_pipe_count#1, c::__CPROVER_threads_exited#1) 
PO: (c::__CPROVER_threads_exited#1, c::__CPROVER_next_thread_id#1) 
PO: (c::__CPROVER_next_thread_id#1, c::x#1) 
PO: (c::x#1, c::y#1) 
PO: (c::y#1, c::m#1) 
PO: (c::m#1, c::n#1) 
PO: (c::n#1, c::__CPROVER_next_thread_id#2) 
PO: (c::__CPROVER_next_thread_id#2, ) 
PO: (, c::__CPROVER_next_thread_id#3) 
PO: (c::__CPROVER_next_thread_id#3, c::__CPROVER_next_thread_id#5) 
PO: (c::__CPROVER_next_thread_id#5, ) 
PO: (, c::__CPROVER_next_thread_id#6) 
PO: (c::__CPROVER_next_thread_id#6, c::__CPROVER_threads_exited#2) 
PO: (c::__CPROVER_threads_exited#2, c::__CPROVER_next_thread_id#7) 
PO: (c::__CPROVER_next_thread_id#7, c::__CPROVER_threads_exited#3) 
PO: (c::__CPROVER_threads_exited#3, c::m#2) 
PO: (c::m#2, c::n#2) 
======== end thread 0===========
======== begin thread 1===========
PO: (c::y#2, c::x#2) 
PO: (c::x#2, c::y#3) 
PO: (c::y#3, c::m#3) 
PO: (c::m#3, c::x#3) 
PO: (c::x#3, c::__CPROVER_threads_exited#4) 
PO: (c::__CPROVER_threads_exited#4, c::__CPROVER_threads_exited#5) 
======== end thread 1===========
======== begin thread 2===========
PO: (c::x#4, c::y#4) 
PO: (c::y#4, c::x#5) 
PO: (c::x#5, c::n#3) 
PO: (c::n#3, c::y#5) 
PO: (c::y#5, c::__CPROVER_threads_exited#6) 
PO: (c::__CPROVER_threads_exited#6, c::__CPROVER_threads_exited#7) 
======== end thread 2===========
POF: (c::__CPROVER_threads_exited#1, c::__CPROVER_threads_exited#2) 
POF: (c::__CPROVER_next_thread_id#1, c::__CPROVER_next_thread_id#3) 
POF: (c::m#1, c::m#2) 
POF: (c::n#1, c::n#2) 
POF: (c::__CPROVER_next_thread_id#2, c::__CPROVER_next_thread_id#3) 
POF: (c::__CPROVER_next_thread_id#5, c::__CPROVER_next_thread_id#6) 
316 steps after addressing program orders: :
FUNCTION_CALL c::__CPROVER_initialize
SHARED WRITE 0: __CPROVER_deallocated#1
ASSIGNMENT __CPROVER_deallocated#1 == NULL
SHARED WRITE 0: __CPROVER_dead_object#1
ASSIGNMENT __CPROVER_dead_object#1 == NULL
SHARED WRITE 0: __CPROVER_malloc_object#1
ASSIGNMENT __CPROVER_malloc_object#1 == NULL
SHARED WRITE 0: __CPROVER_malloc_size#1
ASSIGNMENT __CPROVER_malloc_size#1 == 0
SHARED WRITE 0: __CPROVER_malloc_is_new_array#1
ASSIGNMENT __CPROVER_malloc_is_new_array#1 == FALSE
SHARED WRITE 0: __CPROVER_memory_leak#1
ASSIGNMENT __CPROVER_memory_leak#1 == NULL
ASSIGNMENT __CPROVER_rounding_mode!0#1 == 0
SHARED WRITE 0: __CPROVER_pipe_count#1
ASSIGNMENT __CPROVER_pipe_count#1 == 0
ASSIGNMENT __CPROVER_thread_id!0#1 == 0
SHARED WRITE 0: __CPROVER_threads_exited#1
ASSIGNMENT __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
SHARED WRITE 0: __CPROVER_next_thread_id#1
ASSIGNMENT __CPROVER_next_thread_id#1 == 0
SHARED WRITE 0: x#1
ASSIGNMENT x#1 == 1
SHARED WRITE 0: y#1
ASSIGNMENT y#1 == 1
SHARED WRITE 0: m#1
ASSIGNMENT m#1 == 0
SHARED WRITE 0: n#1
ASSIGNMENT n#1 == 0
FUNCTION_RETURN c::__CPROVER_initialize
FUNCTION_CALL c::main
FUNCTION_CALL c::pthread_create
ASSIGNMENT thread!0@1#1 == &t1!0@1
ASSIGNMENT attr!0@1#1 == ((union pthread_attr_t *)NULL)
ASSIGNMENT start_routine!0@1#1 == thr1
ASSIGNMENT arg!0@1#1 == NULL
ATOMIC_BEGIN
ASSIGNMENT __CPROVER_next_thread_id#2 == 1
ASSIGNMENT this_thread_id!0@1#2 == 1
SHARED WRITE 1: __CPROVER_next_thread_id#2
AUTOMIC_END
ASSIGNMENT t1!0@1#2 == 1
FUNCTION_CALL c::__actual_thread_spawn
ASSIGNMENT start_routine!0@1#1 == thr1
ASSIGNMENT arg!0@1#1 == NULL
ASSIGNMENT id!0@1#1 == 1
SPAWN
ASSIGNMENT start_routine!1@0#1 == thr1
ASSIGNMENT arg!1@0#1 == NULL
ASSIGNMENT id!1@0#1 == 1
ASSIGNMENT __CPROVER_rounding_mode!1#1 == 0
ASSIGNMENT __CPROVER_thread_id!1#1 == 0
ASSIGNMENT pthread_create#return_value!1#1 == 0
ASSIGNMENT pthread_join#return_value!1#1 == 0
ASSIGNMENT thr1#return_value!1#1 == NULL
ASSIGNMENT thr2#return_value!1#1 == NULL
FUNCTION_RETURN c::__actual_thread_spawn
ASSIGNMENT pthread_create#return_value!0#1 == 0
ASSIGNMENT this_thread_id!0@1#4 == 1
FUNCTION_RETURN c::pthread_create
FUNCTION_CALL c::pthread_create
ASSIGNMENT thread!0@2#1 == &t2!0@1
ASSIGNMENT attr!0@2#1 == ((union pthread_attr_t *)NULL)
ASSIGNMENT start_routine!0@2#1 == thr2
ASSIGNMENT arg!0@2#1 == NULL
ATOMIC_BEGIN
ASSIGNMENT __CPROVER_next_thread_id#4 == (FALSE || FALSE ? __CPROVER_next_thread_id#2 : __CPROVER_next_thread_id#3)
ASSIGNMENT __CPROVER_next_thread_id#5 == __CPROVER_next_thread_id#4 + 1
ASSIGNMENT this_thread_id!0@2#2 == __CPROVER_next_thread_id#5
SHARED READ 2: __CPROVER_next_thread_id#3
SHARED WRITE 2: __CPROVER_next_thread_id#5
AUTOMIC_END
ASSIGNMENT t2!0@1#2 == this_thread_id!0@2#2
FUNCTION_CALL c::__actual_thread_spawn
ASSIGNMENT start_routine!0@2#1 == thr2
ASSIGNMENT arg!0@2#1 == NULL
ASSIGNMENT id!0@2#1 == this_thread_id!0@2#2
SPAWN
ASSIGNMENT start_routine!2@0#1 == thr2
ASSIGNMENT arg!2@0#1 == NULL
ASSIGNMENT id!2@0#1 == id!0@2#1
ASSIGNMENT __CPROVER_rounding_mode!2#1 == 0
ASSIGNMENT __CPROVER_thread_id!2#1 == 0
ASSIGNMENT pthread_create#return_value!2#1 == 0
ASSIGNMENT pthread_join#return_value!2#1 == 0
ASSIGNMENT thr1#return_value!2#1 == NULL
ASSIGNMENT thr2#return_value!2#1 == NULL
FUNCTION_RETURN c::__actual_thread_spawn
ASSIGNMENT pthread_create#return_value!0#2 == 0
ASSIGNMENT this_thread_id!0@2#4 == this_thread_id!0@2#2
FUNCTION_RETURN c::pthread_create
FUNCTION_CALL c::pthread_join
ASSIGNMENT thread!0@1#1 == 1
ASSIGNMENT value_ptr!0@1#1 == ((void **)NULL)
SHARED READ 0: __CPROVER_next_thread_id#6
ASSIGNMENT \guard#1 == __CPROVER_next_thread_id#6 < 1
ASSIGNMENT pthread_join#return_value!0#1 == 3
ASSIGNMENT pthread_join#return_value!0#2 == pthread_join#return_value!0#0
SHARED READ 0: __CPROVER_threads_exited#2
ASSIGNMENT pthread_join#return_value!0#3 == 0
ASSIGNMENT pthread_join#return_value!0#4 == (\guard#1 ? 3 : 0)
FUNCTION_RETURN c::pthread_join
FUNCTION_CALL c::pthread_join
ASSIGNMENT thread!0@2#1 == t2!0@1#2
ASSIGNMENT value_ptr!0@2#1 == ((void **)NULL)
SHARED READ 0: __CPROVER_next_thread_id#7
ASSIGNMENT \guard#2 == !(__CPROVER_next_thread_id#7 >= thread!0@2#1)
ASSIGNMENT pthread_join#return_value!0#5 == 3
ASSIGNMENT pthread_join#return_value!0#6 == pthread_join#return_value!0#4
ASSIGNMENT \guard#3 == (thread!0@2#1 == 0)
ASSIGNMENT pthread_join#return_value!0#7 == 35
ASSIGNMENT pthread_join#return_value!0#8 == pthread_join#return_value!0#6
SHARED READ 0: __CPROVER_threads_exited#3
ASSIGNMENT pthread_join#return_value!0#9 == 0
ASSIGNMENT pthread_join#return_value!0#10 == (\guard#3 ? 35 : 0)
ASSIGNMENT pthread_join#return_value!0#11 == (\guard#2 ? 3 : pthread_join#return_value!0#10)
FUNCTION_RETURN c::pthread_join
SHARED READ 0: m#2
ASSIGNMENT \guard#4 == (m#2 == 1)
SHARED READ 0: n#2
ASSIGNMENT \guard#5 == (n#2 == 1)
ASSERT !((!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && (!\guard#2 && (!\guard#3 && __CPROVER_threads_exited#3[(int)thread!0@2#1] || \guard#3) || \guard#2) && \guard#4 && \guard#5)
FUNCTION_RETURN c::main
FUNCTION_RETURN main
ASSIGNMENT __CPROVER_thread_id!1#2 == 1
FUNCTION_CALL c::thr1
ASSIGNMENT arg!1@1#1 == NULL
SHARED READ 0: y#2
SHARED WRITE 0: x#2
ASSIGNMENT x#2 == y#2 + 1
SHARED READ 0: y#3
SHARED WRITE 0: m#3
ASSIGNMENT m#3 == y#3
SHARED WRITE 0: x#3
ASSIGNMENT x#3 == 0
ASSIGNMENT thr1#return_value!1#2 == nondet_symbol(symex::nondet2)
FUNCTION_RETURN c::thr1
MEMORY_BARRIER
SHARED READ 0: __CPROVER_threads_exited#4
SHARED WRITE 0: __CPROVER_threads_exited#5
ASSIGNMENT __CPROVER_threads_exited#5 == __CPROVER_threads_exited#4 WITH [1:=TRUE]
FUNCTION_RETURN c::__actual_thread_spawn
ASSIGNMENT __CPROVER_thread_id!2#2 == id!2@0#1
FUNCTION_CALL c::thr2
ASSIGNMENT arg!2@1#1 == NULL
SHARED READ 0: x#4
SHARED WRITE 0: y#4
ASSIGNMENT y#4 == x#4 + 1
SHARED READ 0: x#5
SHARED WRITE 0: n#3
ASSIGNMENT n#3 == x#5
SHARED WRITE 0: y#5
ASSIGNMENT y#5 == 0
ASSIGNMENT thr2#return_value!2#2 == nondet_symbol(symex::nondet3)
FUNCTION_RETURN c::thr2
MEMORY_BARRIER
SHARED READ 0: __CPROVER_threads_exited#6
SHARED WRITE 0: __CPROVER_threads_exited#7
ASSIGNMENT __CPROVER_threads_exited#7 == __CPROVER_threads_exited#6 WITH [(int)id!2@0#1:=TRUE]
FUNCTION_RETURN c::__actual_thread_spawn
CONSTRAINT !choice_rf0 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1
CONSTRAINT !choice_rf1 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#5
CONSTRAINT !choice_rf1 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)
CONSTRAINT !choice_rf2 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#7
CONSTRAINT !choice_rf2 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)
CONSTRAINT \guard#1 || choice_rf0 || choice_rf1 || choice_rf2
CONSTRAINT !choice_rf3 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1
CONSTRAINT !choice_rf4 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#5
CONSTRAINT !choice_rf4 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
CONSTRAINT !choice_rf5 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#7
CONSTRAINT !choice_rf5 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
CONSTRAINT (\guard#1 || !__CPROVER_threads_exited#2[1]) && !\guard#1 || \guard#2 || \guard#3 || choice_rf3 || choice_rf4 || choice_rf5
CONSTRAINT !choice_rf6 || __CPROVER_threads_exited#4 == __CPROVER_threads_exited#1
CONSTRAINT !choice_rf6 || !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$rclk$8)
CONSTRAINT !choice_rf7 || __CPROVER_threads_exited#4 == __CPROVER_threads_exited#7
CONSTRAINT !choice_rf7 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#4$rclk$8)
CONSTRAINT choice_rf6 || choice_rf7
CONSTRAINT !choice_rf8 || __CPROVER_threads_exited#6 == __CPROVER_threads_exited#1
CONSTRAINT !choice_rf8 || !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#6$rclk$8)
CONSTRAINT !choice_rf9 || __CPROVER_threads_exited#6 == __CPROVER_threads_exited#5
CONSTRAINT !choice_rf9 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#6$rclk$8)
CONSTRAINT choice_rf8 || choice_rf9
CONSTRAINT !choice_rf10 || __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1
CONSTRAINT !choice_rf11 || __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2
CONSTRAINT choice_rf10 || choice_rf11
CONSTRAINT !choice_rf12 || __CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#1
CONSTRAINT !choice_rf13 || __CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#2
CONSTRAINT !choice_rf14 || __CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#5
CONSTRAINT choice_rf12 || choice_rf13 || choice_rf14
CONSTRAINT !choice_rf15 || __CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#1
CONSTRAINT !choice_rf16 || __CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#2
CONSTRAINT !choice_rf17 || __CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#5
CONSTRAINT (\guard#1 || !__CPROVER_threads_exited#2[1]) && !\guard#1 || choice_rf15 || choice_rf16 || choice_rf17
CONSTRAINT !choice_rf18 || x#4 == x#1
CONSTRAINT !choice_rf18 || !(x#1$wclk$8 >= x#4$rclk$8)
CONSTRAINT !choice_rf19 || x#4 == x#2
CONSTRAINT !choice_rf19 || !(x#2$wclk$8 >= x#4$rclk$8)
CONSTRAINT !choice_rf20 || x#4 == x#3
CONSTRAINT !choice_rf20 || !(x#3$wclk$8 >= x#4$rclk$8)
CONSTRAINT choice_rf18 || choice_rf19 || choice_rf20
CONSTRAINT !choice_rf21 || x#5 == x#1
CONSTRAINT !choice_rf21 || !(x#1$wclk$8 >= x#5$rclk$8)
CONSTRAINT !choice_rf22 || x#5 == x#2
CONSTRAINT !choice_rf22 || !(x#2$wclk$8 >= x#5$rclk$8)
CONSTRAINT !choice_rf23 || x#5 == x#3
CONSTRAINT !choice_rf23 || !(x#3$wclk$8 >= x#5$rclk$8)
CONSTRAINT choice_rf21 || choice_rf22 || choice_rf23
CONSTRAINT !choice_rf24 || y#2 == y#1
CONSTRAINT !choice_rf24 || !(y#1$wclk$8 >= y#2$rclk$8)
CONSTRAINT !choice_rf25 || y#2 == y#4
CONSTRAINT !choice_rf25 || !(y#4$wclk$8 >= y#2$rclk$8)
CONSTRAINT !choice_rf26 || y#2 == y#5
CONSTRAINT !choice_rf26 || !(y#5$wclk$8 >= y#2$rclk$8)
CONSTRAINT choice_rf24 || choice_rf25 || choice_rf26
CONSTRAINT !choice_rf27 || y#3 == y#1
CONSTRAINT !choice_rf27 || !(y#1$wclk$8 >= y#3$rclk$8)
CONSTRAINT !choice_rf28 || y#3 == y#4
CONSTRAINT !choice_rf28 || !(y#4$wclk$8 >= y#3$rclk$8)
CONSTRAINT !choice_rf29 || y#3 == y#5
CONSTRAINT !choice_rf29 || !(y#5$wclk$8 >= y#3$rclk$8)
CONSTRAINT choice_rf27 || choice_rf28 || choice_rf29
CONSTRAINT !choice_rf30 || m#2 == m#1
CONSTRAINT !choice_rf31 || m#2 == m#3
CONSTRAINT !choice_rf31 || !(m#3$wclk$8 >= m#2$rclk$8)
CONSTRAINT (\guard#1 || !__CPROVER_threads_exited#2[1]) && !\guard#1 || (\guard#2 || (\guard#3 || !__CPROVER_threads_exited#3[(int)thread!0@2#1]) && !\guard#3) && !\guard#2 || choice_rf30 || choice_rf31
CONSTRAINT !choice_rf32 || n#2 == n#1
CONSTRAINT !choice_rf33 || n#2 == n#3
CONSTRAINT !choice_rf33 || !(n#3$wclk$8 >= n#2$rclk$8)
CONSTRAINT (\guard#1 || !__CPROVER_threads_exited#2[1]) && !\guard#1 || (\guard#2 || (\guard#3 || !__CPROVER_threads_exited#3[(int)thread!0@2#1]) && !\guard#3) && !\guard#2 || !\guard#4 || choice_rf32 || choice_rf33
CONSTRAINT !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
CONSTRAINT !(__CPROVER_next_thread_id#2$wclk$8 >= __CPROVER_next_thread_id#5$wclk$8)
CONSTRAINT !(x#2$wclk$8 >= x#3$wclk$8)
CONSTRAINT !(y#4$wclk$8 >= y#5$wclk$8)
CONSTRAINT !(t1$14$spwnclk$8 >= y#2$rclk$8)
CONSTRAINT !(t1$17$spwnclk$8 >= x#4$rclk$8)
CONSTRAINT !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
CONSTRAINT !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
CONSTRAINT !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
CONSTRAINT !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
CONSTRAINT !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
CONSTRAINT !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
CONSTRAINT !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
CONSTRAINT !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
CONSTRAINT !(__CPROVER_next_thread_id#1$wclk$8 >= x#1$wclk$8)
CONSTRAINT !(x#1$wclk$8 >= y#1$wclk$8)
CONSTRAINT !(y#1$wclk$8 >= m#1$wclk$8)
CONSTRAINT !(m#1$wclk$8 >= n#1$wclk$8)
CONSTRAINT !(n#1$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
CONSTRAINT !(__CPROVER_next_thread_id#2$wclk$8 >= t1$14$spwnclk$8)
CONSTRAINT !(t1$14$spwnclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
CONSTRAINT __CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8
CONSTRAINT !(__CPROVER_next_thread_id#5$wclk$8 >= t1$17$spwnclk$8)
CONSTRAINT !(t1$17$spwnclk$8 >= __CPROVER_next_thread_id#6$rclk$8)
CONSTRAINT !(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
CONSTRAINT !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_next_thread_id#7$rclk$8)
CONSTRAINT !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_threads_exited#3$rclk$8)
CONSTRAINT !(__CPROVER_threads_exited#3$rclk$8 >= m#2$rclk$8)
CONSTRAINT !(m#2$rclk$8 >= n#2$rclk$8)
CONSTRAINT !(y#2$rclk$8 >= x#2$wclk$8)
CONSTRAINT !(x#2$wclk$8 >= y#3$rclk$8)
CONSTRAINT !(y#3$rclk$8 >= m#3$wclk$8)
CONSTRAINT !(m#3$wclk$8 >= x#3$wclk$8)
CONSTRAINT !(x#3$wclk$8 >= __CPROVER_threads_exited#4$rclk$8)
CONSTRAINT !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)
CONSTRAINT !(x#4$rclk$8 >= y#4$wclk$8)
CONSTRAINT !(y#4$wclk$8 >= x#5$rclk$8)
CONSTRAINT !(x#5$rclk$8 >= n#3$wclk$8)
CONSTRAINT !(n#3$wclk$8 >= y#5$wclk$8)
CONSTRAINT !(y#5$wclk$8 >= __CPROVER_threads_exited#6$rclk$8)
CONSTRAINT !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)
CONSTRAINT !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)
CONSTRAINT !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
CONSTRAINT !(m#1$wclk$8 >= m#2$rclk$8)
CONSTRAINT !(n#1$wclk$8 >= n#2$rclk$8)
CONSTRAINT !(__CPROVER_next_thread_id#2$wclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
CONSTRAINT !(__CPROVER_next_thread_id#5$wclk$8 >= __CPROVER_next_thread_id#6$rclk$8)
size of program expression: 316 steps
no slicing due to threads
Generated 1 VCC(s), 1 remaining after simplification

Program constraints:
(1) __CPROVER_deallocated#1 == NULL
(2) __CPROVER_dead_object#1 == NULL
(3) __CPROVER_malloc_object#1 == NULL
(4) __CPROVER_malloc_size#1 == 0
(5) __CPROVER_malloc_is_new_array#1 == FALSE
(6) __CPROVER_memory_leak#1 == NULL
(7) __CPROVER_rounding_mode!0#1 == 0
(8) __CPROVER_pipe_count#1 == 0
(9) __CPROVER_thread_id!0#1 == 0
(10) __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
(11) __CPROVER_next_thread_id#1 == 0
(12) x#1 == 1
(13) y#1 == 1
(14) m#1 == 0
(15) n#1 == 0
(16) thread!0@1#1 == &t1!0@1
(17) attr!0@1#1 == ((union pthread_attr_t *)NULL)
(18) start_routine!0@1#1 == thr1
(19) arg!0@1#1 == NULL
(20) __CPROVER_next_thread_id#2 == 1
(21) this_thread_id!0@1#2 == 1
(22) t1!0@1#2 == 1
(23) start_routine!0@1#1 == thr1
(24) arg!0@1#1 == NULL
(25) id!0@1#1 == 1
(26) start_routine!1@0#1 == thr1
(27) arg!1@0#1 == NULL
(28) id!1@0#1 == 1
(29) __CPROVER_rounding_mode!1#1 == 0
(30) __CPROVER_thread_id!1#1 == 0
(31) pthread_create#return_value!1#1 == 0
(32) pthread_join#return_value!1#1 == 0
(33) thr1#return_value!1#1 == NULL
(34) thr2#return_value!1#1 == NULL
(35) pthread_create#return_value!0#1 == 0
(36) this_thread_id!0@1#4 == 1
(37) thread!0@2#1 == &t2!0@1
(38) attr!0@2#1 == ((union pthread_attr_t *)NULL)
(39) start_routine!0@2#1 == thr2
(40) arg!0@2#1 == NULL
(41) __CPROVER_next_thread_id#4 == (FALSE || FALSE ? __CPROVER_next_thread_id#2 : __CPROVER_next_thread_id#3)
(42) __CPROVER_next_thread_id#5 == __CPROVER_next_thread_id#4 + 1
(43) this_thread_id!0@2#2 == __CPROVER_next_thread_id#5
(44) t2!0@1#2 == this_thread_id!0@2#2
(45) start_routine!0@2#1 == thr2
(46) arg!0@2#1 == NULL
(47) id!0@2#1 == this_thread_id!0@2#2
(48) start_routine!2@0#1 == thr2
(49) arg!2@0#1 == NULL
(50) id!2@0#1 == id!0@2#1
(51) __CPROVER_rounding_mode!2#1 == 0
(52) __CPROVER_thread_id!2#1 == 0
(53) pthread_create#return_value!2#1 == 0
(54) pthread_join#return_value!2#1 == 0
(55) thr1#return_value!2#1 == NULL
(56) thr2#return_value!2#1 == NULL
(57) pthread_create#return_value!0#2 == 0
(58) this_thread_id!0@2#4 == this_thread_id!0@2#2
(59) thread!0@1#1 == 1
(60) value_ptr!0@1#1 == ((void **)NULL)
(61) \guard#1 == __CPROVER_next_thread_id#6 < 1
(62) pthread_join#return_value!0#1 == 3
     guard: \guard#1
(63) pthread_join#return_value!0#2 == pthread_join#return_value!0#0
(64) pthread_join#return_value!0#3 == 0
     guard: !\guard#1 && __CPROVER_threads_exited#2[1]
(65) pthread_join#return_value!0#4 == (\guard#1 ? 3 : 0)
(66) thread!0@2#1 == t2!0@1#2
     guard: !\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1
(67) value_ptr!0@2#1 == ((void **)NULL)
     guard: !\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1
(68) \guard#2 == !(__CPROVER_next_thread_id#7 >= thread!0@2#1)
(69) pthread_join#return_value!0#5 == 3
     guard: (!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && \guard#2
(70) pthread_join#return_value!0#6 == pthread_join#return_value!0#4
(71) \guard#3 == (thread!0@2#1 == 0)
(72) pthread_join#return_value!0#7 == 35
     guard: (!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && !\guard#2 && \guard#3
(73) pthread_join#return_value!0#8 == pthread_join#return_value!0#6
(74) pthread_join#return_value!0#9 == 0
     guard: (!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && !\guard#2 && !\guard#3 && __CPROVER_threads_exited#3[(int)thread!0@2#1]
(75) pthread_join#return_value!0#10 == (\guard#3 ? 35 : 0)
(76) pthread_join#return_value!0#11 == (\guard#2 ? 3 : pthread_join#return_value!0#10)
(77) \guard#4 == (m#2 == 1)
(78) \guard#5 == (n#2 == 1)
(79) ASSERT(!((!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && (!\guard#2 && (!\guard#3 && __CPROVER_threads_exited#3[(int)thread!0@2#1] || \guard#3) || \guard#2) && \guard#4 && \guard#5)) 
     guard: (!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && (!\guard#2 && (!\guard#3 && __CPROVER_threads_exited#3[(int)thread!0@2#1] || \guard#3) || \guard#2) && \guard#4 && \guard#5
(80) __CPROVER_thread_id!1#2 == 1
(81) arg!1@1#1 == NULL
(82) x#2 == y#2 + 1
(83) m#3 == y#3
(84) x#3 == 0
(85) thr1#return_value!1#2 == nondet_symbol(symex::nondet2)
(86) __CPROVER_threads_exited#5 == __CPROVER_threads_exited#4 WITH [1:=TRUE]
(87) __CPROVER_thread_id!2#2 == id!2@0#1
(88) arg!2@1#1 == NULL
(89) y#4 == x#4 + 1
(90) n#3 == x#5
(91) y#5 == 0
(92) thr2#return_value!2#2 == nondet_symbol(symex::nondet3)
(93) __CPROVER_threads_exited#7 == __CPROVER_threads_exited#6 WITH [(int)id!2@0#1:=TRUE]