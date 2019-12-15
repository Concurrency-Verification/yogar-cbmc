This product includes software developed by Daniel Kroening, Edmund Clarke,
Computer Science Department, University of Oxford
Computer Science Department, Carnegie Mellon University
CBMC version 4.9 64-bit linux
file test.c: Parsing
Converting
Type-checking test
Generating GOTO Program
Adding CPROVER library
Function Pointer Removal
Partial Inlining
Generic Property Instrumentation
Starting Bounded Model Checking
--unwind 2
Adding SC constraints
Shared c::__CPROVER_threads_exited: 4R/3W
Shared c::__CPROVER_next_thread_id: 3R/3W
Shared c::x: 2R/1W
Shared c::r1: 1R/3W
Shared c::r2: 1R/1W
reads num: 11
writes num: 11
201 steps
201 steps
237 steps
size of program expression: 237 steps
no slicing due to threads
Generated 1 VCC(s), 1 remaining after simplification

Program constraints:
(1) x#1 == 0
(2) y#1 == 0
(3) r1#1 == 0
(4) r2#1 == 0
(5) __CPROVER_deallocated#1 == NULL
(6) __CPROVER_dead_object#1 == NULL
(7) __CPROVER_malloc_object#1 == NULL
(8) __CPROVER_malloc_size#1 == 0
(9) __CPROVER_malloc_is_new_array#1 == FALSE
(10) __CPROVER_memory_leak#1 == NULL
(11) __CPROVER_rounding_mode!0#1 == 0
(12) __CPROVER_pipe_count#1 == 0
(13) __CPROVER_thread_id!0#1 == 0
(14) __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
(15) __CPROVER_next_thread_id#1 == 0
(16) argv'#1 == argv'#0 WITH [argc'#0:=((signed char *)NULL)]
(17) argc!0@1#1 == argc'#0
(18) argv!0@1#1 == argv
(19) thread!0@1#1 == &t1!0@1
(20) attr!0@1#1 == ((union pthread_attr_t *)NULL)
(21) start_routine!0@1#1 == thr1
(22) arg!0@1#1 == NULL
(23) __CPROVER_next_thread_id#2 == 1
(24) this_thread_id!0@1#2 == 1
(25) t1!0@1#2 == 1
(26) start_routine!0@1#1 == thr1
(27) arg!0@1#1 == NULL
(28) id!0@1#1 == 1
(29) start_routine!1@0#1 == thr1
(30) arg!1@0#1 == NULL
(31) id!1@0#1 == 1
(32) pthread_join#return_value!1#1 == 0
(33) thr1#return_value!1#1 == NULL
(34) main#return_value!1#1 == 0
(35) __CPROVER_rounding_mode!1#1 == 0
(36) __CPROVER_thread_id!1#1 == 0
(37) pthread_create#return_value!1#1 == 0
(38) pthread_create#return_value!0#1 == 0
(39) this_thread_id!0@1#4 == 1
(40) thread!0@2#1 == &t2!0@1
(41) attr!0@2#1 == ((union pthread_attr_t *)NULL)
(42) start_routine!0@2#1 == (void * (*)(void *))thr2
(43) arg!0@2#1 == NULL
(44) __CPROVER_next_thread_id#4 == (FALSE || FALSE ? __CPROVER_next_thread_id#2 : __CPROVER_next_thread_id#3)
(45) __CPROVER_next_thread_id#5 == __CPROVER_next_thread_id#4 + 1
(46) this_thread_id!0@2#2 == __CPROVER_next_thread_id#5
(47) t2!0@1#2 == this_thread_id!0@2#2
(48) start_routine!0@2#1 == (void * (*)(void *))thr2
(49) arg!0@2#1 == NULL
(50) id!0@2#1 == this_thread_id!0@2#2
(51) start_routine!2@0#1 == (void * (*)(void *))thr2
(52) arg!2@0#1 == NULL
(53) id!2@0#1 == id!0@2#1
(54) pthread_join#return_value!2#1 == 0
(55) thr1#return_value!2#1 == NULL
(56) main#return_value!2#1 == 0
(57) __CPROVER_rounding_mode!2#1 == 0
(58) __CPROVER_thread_id!2#1 == 0
(59) pthread_create#return_value!2#1 == 0
(60) pthread_create#return_value!0#2 == 0
(61) this_thread_id!0@2#4 == this_thread_id!0@2#2
(62) thread!0@1#1 == 1
(63) value_ptr!0@1#1 == ((void **)NULL)
(64) \guard#1 == __CPROVER_next_thread_id#6 < 1
(65) pthread_join#return_value!0#1 == 3
     guard: \guard#1
(66) pthread_join#return_value!0#2 == pthread_join#return_value!0#0
(67) pthread_join#return_value!0#3 == 0
     guard: !\guard#1 && __CPROVER_threads_exited#2[1]
(68) pthread_join#return_value!0#4 == (\guard#1 ? 3 : 0)
(69) thread!0@2#1 == t2!0@1#2
     guard: !\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1
(70) value_ptr!0@2#1 == ((void **)NULL)
     guard: !\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1
(71) \guard#2 == !(__CPROVER_next_thread_id#7 >= thread!0@2#1)
(72) pthread_join#return_value!0#5 == 3
     guard: (!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && \guard#2
(73) pthread_join#return_value!0#6 == pthread_join#return_value!0#4
(74) \guard#3 == (thread!0@2#1 == 0)
(75) pthread_join#return_value!0#7 == 35
     guard: (!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && !\guard#2 && \guard#3
(76) pthread_join#return_value!0#8 == pthread_join#return_value!0#6
(77) pthread_join#return_value!0#9 == 0
     guard: (!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && !\guard#2 && !\guard#3 && __CPROVER_threads_exited#3[(int)thread!0@2#1]
(78) pthread_join#return_value!0#10 == (\guard#3 ? 35 : 0)
(79) pthread_join#return_value!0#11 == (\guard#2 ? 3 : pthread_join#return_value!0#10)
(80) \guard#4 == (r1#2 == 0)
(81) \guard#5 == (r2#2 == 0)
(82) ASSERT(!((!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && (!\guard#2 && (!\guard#3 && __CPROVER_threads_exited#3[(int)thread!0@2#1] || \guard#3) || \guard#2) && \guard#4 && \guard#5))
     guard: (!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && (!\guard#2 && (!\guard#3 && __CPROVER_threads_exited#3[(int)thread!0@2#1] || \guard#3) || \guard#2) && \guard#4 && \guard#5
(83) main#return_value!0#1 == 0
     guard: (!\guard#1 && __CPROVER_threads_exited#2[1] || \guard#1) && (!\guard#2 && (!\guard#3 && __CPROVER_threads_exited#3[(int)thread!0@2#1] || \guard#3) || \guard#2) && (\guard#4 && \guard#5 || \guard#4 && !\guard#5 || !\guard#4)
(84) t1!0@1#4 == 1
(85) t2!0@1#4 == t2!0@1#2
(86) __CPROVER_thread_id!1#2 == 1
(87) arg!1@1#1 == NULL
(88) r1#3 == x#2
(89) y#2 == 1
(90) thr1#return_value!1#2 == nondet_symbol(symex::nondet2)
(91) __CPROVER_threads_exited#5 == __CPROVER_threads_exited#4 WITH [1:=TRUE]
(92) __CPROVER_thread_id!2#2 == id!2@0#1
(93) arg!2@1#1 == NULL
(94) r1#4 == x#3
(95) y#3 == 1
(96) thr1#return_value!2#2 == nondet_symbol(symex::nondet3)
(97) __CPROVER_threads_exited#7 == __CPROVER_threads_exited#6 WITH [(int)id!2@0#1:=TRUE]
