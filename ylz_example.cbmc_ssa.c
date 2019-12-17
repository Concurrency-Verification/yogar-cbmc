CBMC version 5.10 (cbmc-5.10-3-ga218aeb-dirty) 64-bit x86_64 linux
Parsing ../yogar-cbmc/ylz_example.c
Converting
Type-checking ylz_example
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
file <builtin-library-pthread_create> line 39 function pthread_create: replacing function pointer by 2 possible targets
Generic Property Instrumentation
Running with 8 object bits, 24 offset bits (default)
Starting Bounded Model Checking
Adding SC constraints
Shared __CPROVER_threads_exited: 4R/3W
Shared __CPROVER_next_thread_id: 3R/3W
Shared x: 2R/3W
Shared y: 2R/3W
Shared m: 1R/2W
Shared n: 1R/2W
Shared main::1::t1!0@1: 2R/2W
Shared main::1::t2!0@1: 2R/2W
size of program expression: 404 steps
no slicing due to threads
Generated 1 VCC(s), 1 remaining after simplification

Program constraints:
// 70 
// 70 
// 44 file <built-in-additions> line 11
(1) SHARED_WRITE(__CPROVER_dead_object#1)
// 44 file <built-in-additions> line 11
(2) __CPROVER_dead_object#1 == NULL
// 45 file <built-in-additions> line 10
(3) SHARED_WRITE(__CPROVER_deallocated#1)
// 45 file <built-in-additions> line 10
(4) __CPROVER_deallocated#1 == NULL
// 46 file <built-in-additions> line 14
(5) SHARED_WRITE(__CPROVER_malloc_is_new_array#1)
// 46 file <built-in-additions> line 14
(6) __CPROVER_malloc_is_new_array#1 == FALSE
// 47 file <built-in-additions> line 12
(7) SHARED_WRITE(__CPROVER_malloc_object#1)
// 47 file <built-in-additions> line 12
(8) __CPROVER_malloc_object#1 == NULL
// 48 file <built-in-additions> line 13
(9) SHARED_WRITE(__CPROVER_malloc_size#1)
// 48 file <built-in-additions> line 13
(10) __CPROVER_malloc_size#1 == 0u
// 49 file <built-in-additions> line 15
(11) SHARED_WRITE(__CPROVER_memory_leak#1)
// 49 file <built-in-additions> line 15
(12) __CPROVER_memory_leak#1 == NULL
// 50 file <built-in-additions> line 8
(13) SHARED_WRITE(__CPROVER_next_thread_id#1)
// 50 file <built-in-additions> line 8
(14) __CPROVER_next_thread_id#1 == 0u
// 51 file <built-in-additions> line 29
(15) SHARED_WRITE(__CPROVER_pipe_count#1)
// 51 file <built-in-additions> line 29
(16) __CPROVER_pipe_count#1 == 0u
// 52 file <built-in-additions> line 20
(17) __CPROVER_rounding_mode!0#1 == 0
// 53 file <built-in-additions> line 6
(18) __CPROVER_thread_id!0#1 == 0u
// 54 file <built-in-additions> line 7
(19) SHARED_WRITE(__CPROVER_threads_exited#1)
// 54 file <built-in-additions> line 7
(20) __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
// 55 file ../yogar-cbmc/ylz_example.c line 4
(21) SHARED_WRITE(m#1)
// 55 file ../yogar-cbmc/ylz_example.c line 4
(22) m#1 == 0
// 56 file ../yogar-cbmc/ylz_example.c line 4
(23) SHARED_WRITE(n#1)
// 56 file ../yogar-cbmc/ylz_example.c line 4
(24) n#1 == 0
// 57 file ../yogar-cbmc/ylz_example.c line 4
(25) SHARED_WRITE(x#1)
// 57 file ../yogar-cbmc/ylz_example.c line 4
(26) x#1 == 1
// 58 file ../yogar-cbmc/ylz_example.c line 4
(27) SHARED_WRITE(y#1)
// 58 file ../yogar-cbmc/ylz_example.c line 4
(28) y#1 == 1
// 59 
// 71 file ../yogar-cbmc/ylz_example.c line 17
// 71 file ../yogar-cbmc/ylz_example.c line 17
// 0 file ../yogar-cbmc/ylz_example.c line 18 function main
// 0 file ../yogar-cbmc/ylz_example.c line 18 function main
(29) SHARED_WRITE(t1!0@1#1)
// 1 file ../yogar-cbmc/ylz_example.c line 18 function main
// 1 file ../yogar-cbmc/ylz_example.c line 18 function main
(30) SHARED_WRITE(t2!0@1#1)
// 2 file ../yogar-cbmc/ylz_example.c line 19 function main
// 2 file ../yogar-cbmc/ylz_example.c line 19 function main
// 2 file ../yogar-cbmc/ylz_example.c line 19 function main
(31) thread!0@1#1 == &t1!0@1
// 2 file ../yogar-cbmc/ylz_example.c line 19 function main
(32) attr!0@1#1 == ((union pthread_attr_t { char __size[56]; signed int __align; } *)NULL)
// 2 file ../yogar-cbmc/ylz_example.c line 19 function main
(33) start_routine!0@1#1 == thr1
// 2 file ../yogar-cbmc/ylz_example.c line 19 function main
(34) arg!0@1#1 == NULL
// 10 file <builtin-library-pthread_create> line 18 function pthread_create
// 11 file <builtin-library-pthread_create> line 19 function pthread_create
// 12 file <builtin-library-pthread_create> line 20 function pthread_create
(35) __CPROVER_next_thread_id#2 == 1u
// 13 file <builtin-library-pthread_create> line 20 function pthread_create
(36) this_thread_id!0@1#2 == 1u
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(37) SHARED_WRITE(__CPROVER_next_thread_id#2)
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
// 15 file <builtin-library-pthread_create> line 24 function pthread_create
(38) SHARED_WRITE(t1!0@1#2)
// 15 file <builtin-library-pthread_create> line 24 function pthread_create
(39) t1!0@1#2 == 1u
// 16 file <builtin-library-pthread_create> line 30 function pthread_create
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(40) thread!1@0#1 == &t1!0@1
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(41) attr!1@0#1 == ((union pthread_attr_t { char __size[56]; signed int __align; } *)NULL)
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(42) start_routine!1@0#1 == thr1
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(43) arg!1@0#1 == NULL
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(44) this_thread_id!1@0#1 == 1u
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(45) thr1#return_value!1#1 == NULL
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(46) thr2#return_value!1#1 == NULL
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(47) pthread_join#return_value!1#1 == 0
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(48) pthread_create#return_value!1#1 == 0
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(49) __CPROVER_thread_id!1#1 == 0u
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(50) __CPROVER_rounding_mode!1#1 == 0
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
// 30 file <builtin-library-pthread_create> line 44 function pthread_create
(51) pthread_create#return_value!0#1 == 0
// 32 file <builtin-library-pthread_create> line 45 function pthread_create
// 3 file ../yogar-cbmc/ylz_example.c line 20 function main
// 3 file ../yogar-cbmc/ylz_example.c line 20 function main
// 3 file ../yogar-cbmc/ylz_example.c line 20 function main
(52) thread!0@2#1 == &t2!0@1
// 3 file ../yogar-cbmc/ylz_example.c line 20 function main
(53) attr!0@2#1 == ((union pthread_attr_t { char __size[56]; signed int __align; } *)NULL)
// 3 file ../yogar-cbmc/ylz_example.c line 20 function main
(54) start_routine!0@2#1 == thr2
// 3 file ../yogar-cbmc/ylz_example.c line 20 function main
(55) arg!0@2#1 == NULL
// 10 file <builtin-library-pthread_create> line 18 function pthread_create
// 11 file <builtin-library-pthread_create> line 19 function pthread_create
// 12 file <builtin-library-pthread_create> line 20 function pthread_create
(56) __CPROVER_next_thread_id#4 == __CPROVER_next_thread_id#3
// 12 file <builtin-library-pthread_create> line 20 function pthread_create
(57) __CPROVER_next_thread_id#5 == 1u + __CPROVER_next_thread_id#4
// 13 file <builtin-library-pthread_create> line 20 function pthread_create
(58) this_thread_id!0@2#2 == __CPROVER_next_thread_id#5
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(59) SHARED_READ(__CPROVER_next_thread_id#3)
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(60) SHARED_WRITE(__CPROVER_next_thread_id#5)
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
// 15 file <builtin-library-pthread_create> line 24 function pthread_create
(61) SHARED_WRITE(t2!0@1#2)
// 15 file <builtin-library-pthread_create> line 24 function pthread_create
(62) t2!0@1#2 == this_thread_id!0@2#2
// 16 file <builtin-library-pthread_create> line 30 function pthread_create
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(63) thread!2@0#1 == &t2!0@1
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(64) attr!2@0#1 == ((union pthread_attr_t { char __size[56]; signed int __align; } *)NULL)
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(65) start_routine!2@0#1 == thr2
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(66) arg!2@0#1 == NULL
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(67) this_thread_id!2@0#1 == this_thread_id!0@2#2
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(68) thr1#return_value!2#1 == NULL
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(69) thr2#return_value!2#1 == NULL
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(70) pthread_join#return_value!2#1 == 0
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(71) pthread_create#return_value!2#1 == 0
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(72) __CPROVER_thread_id!2#1 == 0u
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(73) __CPROVER_rounding_mode!2#1 == 0
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
// 30 file <builtin-library-pthread_create> line 44 function pthread_create
(74) pthread_create#return_value!0#2 == 0
// 32 file <builtin-library-pthread_create> line 45 function pthread_create
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(75) SHARED_READ(t1!0@1#3)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(76) SHARED_READ(t1!0@1#4)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(77) thread!0@1#1 == t1!0@1#4
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(78) value_ptr!0@1#1 == ((const void **)NULL)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(79) SHARED_READ(__CPROVER_next_thread_id#6)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(80) \guard#1 == !(__CPROVER_next_thread_id#6 >= thread!0@1#1)
// 34 file <builtin-library-pthread_join> line 26 function pthread_join
(81) pthread_join#return_value!0#1 == 3
     guard: \guard#1
// 35 file <builtin-library-pthread_join> line 26 function pthread_join
// 36 file <builtin-library-pthread_join> line 27 function pthread_join
// 36 file <builtin-library-pthread_join> line 27 function pthread_join
(82) \guard#2 == (thread!0@1#1 == 0u)
// 37 file <builtin-library-pthread_join> line 27 function pthread_join
(83) pthread_join#return_value!0#2 == 35
     guard: !\guard#1 && \guard#2
// 38 file <builtin-library-pthread_join> line 27 function pthread_join
// 39 file <builtin-library-pthread_join> line 28 function pthread_join
(84) pthread_join#return_value!0#3 == 3
// 39 file <builtin-library-pthread_join> line 28 function pthread_join
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(85) SHARED_READ(__CPROVER_threads_exited#2)
     guard: !\guard#1 && !\guard#2
// 42 file <builtin-library-pthread_join> line 31 function pthread_join
(86) pthread_join#return_value!0#4 == 0
     guard: !\guard#1 && !\guard#2 && __CPROVER_threads_exited#2[(signed int)thread!0@1#1]
// 43 file <builtin-library-pthread_join> line 32 function pthread_join
(87) pthread_join#return_value!0#5 == (\guard#2 ? 35 : 0)
// 43 file <builtin-library-pthread_join> line 32 function pthread_join
(88) pthread_join#return_value!0#6 == (\guard#1 ? 3 : pthread_join#return_value!0#5)
// 43 file <builtin-library-pthread_join> line 32 function pthread_join
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(89) SHARED_READ(t2!0@1#3)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(90) SHARED_READ(t2!0@1#4)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(91) thread!0@2#1 == t2!0@1#4
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(92) value_ptr!0@2#1 == ((const void **)NULL)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(93) SHARED_READ(__CPROVER_next_thread_id#7)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(94) \guard#3 == !(__CPROVER_next_thread_id#7 >= thread!0@2#1)
// 34 file <builtin-library-pthread_join> line 26 function pthread_join
(95) pthread_join#return_value!0#7 == 3
     guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && \guard#3
// 35 file <builtin-library-pthread_join> line 26 function pthread_join
// 36 file <builtin-library-pthread_join> line 27 function pthread_join
(96) pthread_join#return_value!0#8 == pthread_join#return_value!0#6
// 36 file <builtin-library-pthread_join> line 27 function pthread_join
// 36 file <builtin-library-pthread_join> line 27 function pthread_join
(97) \guard#4 == (thread!0@2#1 == 0u)
// 37 file <builtin-library-pthread_join> line 27 function pthread_join
(98) pthread_join#return_value!0#9 == 35
     guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && \guard#4
// 38 file <builtin-library-pthread_join> line 27 function pthread_join
// 39 file <builtin-library-pthread_join> line 28 function pthread_join
(99) pthread_join#return_value!0#10 == pthread_join#return_value!0#8
// 39 file <builtin-library-pthread_join> line 28 function pthread_join
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(100) SHARED_READ(__CPROVER_threads_exited#3)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && !\guard#4
// 42 file <builtin-library-pthread_join> line 31 function pthread_join
(101) pthread_join#return_value!0#11 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && !\guard#4 && __CPROVER_threads_exited#3[(signed int)thread!0@2#1]
// 43 file <builtin-library-pthread_join> line 32 function pthread_join
(102) pthread_join#return_value!0#12 == (\guard#4 ? 35 : 0)
// 43 file <builtin-library-pthread_join> line 32 function pthread_join
(103) pthread_join#return_value!0#13 == (\guard#3 ? 3 : pthread_join#return_value!0#12)
// 43 file <builtin-library-pthread_join> line 32 function pthread_join
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(104) SHARED_READ(m#2)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(105) SHARED_READ(n#2)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(106) ASSERT((!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) ==> !(m#2 == 1) || !(n#2 == 1))
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 9 file ../yogar-cbmc/ylz_example.c line 24 function main
// 72 
// 20 file <builtin-library-pthread_create> line 33 function pthread_create
(107) __CPROVER_thread_id!1#2 == 1u
// 22 file <builtin-library-pthread_create> line 39 function pthread_create
// 23 file <builtin-library-pthread_create> line 39 function pthread_create
// 26 file <builtin-library-pthread_create> line 39 function pthread_create
// 26 file <builtin-library-pthread_create> line 39 function pthread_create
// 26 file <builtin-library-pthread_create> line 39 function pthread_create
(108) arg!1@1#1 == NULL
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(109) SHARED_READ(y#2)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(110) SHARED_WRITE(x#2)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(111) x#2 == 1 + y#2
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(112) SHARED_READ(y#3)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(113) SHARED_WRITE(m#3)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(114) m#3 == y#3
// 62 file ../yogar-cbmc/ylz_example.c line 8 function thr1
(115) SHARED_WRITE(x#3)
// 62 file ../yogar-cbmc/ylz_example.c line 8 function thr1
(116) x#3 == 0
// 63 file ../yogar-cbmc/ylz_example.c line 9 function thr1
(117) thr1#return_value!1#2 == nondet_symbol(symex::nondet0)
// 64 file ../yogar-cbmc/ylz_example.c line 9 function thr1
// 27 file <builtin-library-pthread_create> line 40 function pthread_create
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(118) SHARED_READ(__CPROVER_threads_exited#4)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(119) SHARED_WRITE(__CPROVER_threads_exited#5)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(120) __CPROVER_threads_exited#5 == __CPROVER_threads_exited#4 WITH [1:=TRUE]
// 32 file <builtin-library-pthread_create> line 45 function pthread_create
// 20 file <builtin-library-pthread_create> line 33 function pthread_create
(121) __CPROVER_thread_id!2#2 == this_thread_id!2@0#1
// 22 file <builtin-library-pthread_create> line 39 function pthread_create
// 24 file <builtin-library-pthread_create> line 39 function pthread_create
// 24 file <builtin-library-pthread_create> line 39 function pthread_create
// 24 file <builtin-library-pthread_create> line 39 function pthread_create
(122) arg!2@1#1 == NULL
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(123) SHARED_READ(x#4)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(124) SHARED_WRITE(y#4)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(125) y#4 == 1 + x#4
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(126) SHARED_READ(x#5)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(127) SHARED_WRITE(n#3)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(128) n#3 == x#5
// 67 file ../yogar-cbmc/ylz_example.c line 14 function thr2
(129) SHARED_WRITE(y#5)
// 67 file ../yogar-cbmc/ylz_example.c line 14 function thr2
(130) y#5 == 0
// 68 file ../yogar-cbmc/ylz_example.c line 15 function thr2
(131) thr2#return_value!2#2 == nondet_symbol(symex::nondet1)
// 69 file ../yogar-cbmc/ylz_example.c line 15 function thr2
// 25 file <builtin-library-pthread_create> line 39 function pthread_create
// 27 file <builtin-library-pthread_create> line 40 function pthread_create
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(132) SHARED_READ(__CPROVER_threads_exited#6)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(133) SHARED_WRITE(__CPROVER_threads_exited#7)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(134) __CPROVER_threads_exited#7 == __CPROVER_threads_exited#6 WITH [(signed int)this_thread_id!2@0#1:=TRUE]
// 32 file <builtin-library-pthread_create> line 45 function pthread_create
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(135) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(136) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#5 || !choice_rf1)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(137) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(138) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#7 || !choice_rf2)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(139) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf2)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(140) CONSTRAINT(choice_rf0 || choice_rf1 || choice_rf2 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(141) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf3)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(142) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#5 || !choice_rf4)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(143) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf4)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(144) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#7 || !choice_rf5)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(145) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf5)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(146) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf3 || choice_rf4 || choice_rf5 || \guard#3 || \guard#4)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(147) CONSTRAINT(__CPROVER_threads_exited#4 == __CPROVER_threads_exited#1 || !choice_rf6)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(148) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$rclk$8) || !choice_rf6)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(149) CONSTRAINT(__CPROVER_threads_exited#4 == __CPROVER_threads_exited#7 || !choice_rf7)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(150) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#4$rclk$8) || !choice_rf7)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(151) CONSTRAINT(choice_rf6 || choice_rf7)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(152) CONSTRAINT(__CPROVER_threads_exited#6 == __CPROVER_threads_exited#1 || !choice_rf8)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(153) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#6$rclk$8) || !choice_rf8)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(154) CONSTRAINT(__CPROVER_threads_exited#6 == __CPROVER_threads_exited#5 || !choice_rf9)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(155) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#6$rclk$8) || !choice_rf9)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(156) CONSTRAINT(choice_rf8 || choice_rf9)
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(157) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf10)
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(158) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 || !choice_rf11)
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(159) CONSTRAINT(choice_rf10 || choice_rf11)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(160) CONSTRAINT(__CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#1 || !choice_rf12)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(161) CONSTRAINT(__CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#2 || !choice_rf13)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(162) CONSTRAINT(__CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#5 || !choice_rf14)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(163) CONSTRAINT(choice_rf12 || choice_rf13 || choice_rf14)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(164) CONSTRAINT(__CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#1 || !choice_rf15)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(165) CONSTRAINT(__CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#2 || !choice_rf16)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(166) CONSTRAINT(__CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#5 || !choice_rf17)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(167) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf15 || choice_rf16 || choice_rf17)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(168) CONSTRAINT(x#4 == x#1 || !choice_rf18)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(169) CONSTRAINT(!(x#1$wclk$8 >= x#4$rclk$8) || !choice_rf18)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(170) CONSTRAINT(x#4 == x#2 || !choice_rf19)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(171) CONSTRAINT(!(x#2$wclk$8 >= x#4$rclk$8) || !choice_rf19)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(172) CONSTRAINT(x#4 == x#3 || !choice_rf20)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(173) CONSTRAINT(!(x#3$wclk$8 >= x#4$rclk$8) || !choice_rf20)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(174) CONSTRAINT(choice_rf18 || choice_rf19 || choice_rf20)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(175) CONSTRAINT(x#5 == x#1 || !choice_rf21)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(176) CONSTRAINT(!(x#1$wclk$8 >= x#5$rclk$8) || !choice_rf21)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(177) CONSTRAINT(x#5 == x#2 || !choice_rf22)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(178) CONSTRAINT(!(x#2$wclk$8 >= x#5$rclk$8) || !choice_rf22)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(179) CONSTRAINT(x#5 == x#3 || !choice_rf23)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(180) CONSTRAINT(!(x#3$wclk$8 >= x#5$rclk$8) || !choice_rf23)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(181) CONSTRAINT(choice_rf21 || choice_rf22 || choice_rf23)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(182) CONSTRAINT(y#2 == y#1 || !choice_rf24)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(183) CONSTRAINT(!(y#1$wclk$8 >= y#2$rclk$8) || !choice_rf24)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(184) CONSTRAINT(y#2 == y#4 || !choice_rf25)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(185) CONSTRAINT(!(y#4$wclk$8 >= y#2$rclk$8) || !choice_rf25)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(186) CONSTRAINT(y#2 == y#5 || !choice_rf26)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(187) CONSTRAINT(!(y#5$wclk$8 >= y#2$rclk$8) || !choice_rf26)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(188) CONSTRAINT(choice_rf24 || choice_rf25 || choice_rf26)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(189) CONSTRAINT(y#3 == y#1 || !choice_rf27)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(190) CONSTRAINT(!(y#1$wclk$8 >= y#3$rclk$8) || !choice_rf27)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(191) CONSTRAINT(y#3 == y#4 || !choice_rf28)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(192) CONSTRAINT(!(y#4$wclk$8 >= y#3$rclk$8) || !choice_rf28)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(193) CONSTRAINT(y#3 == y#5 || !choice_rf29)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(194) CONSTRAINT(!(y#5$wclk$8 >= y#3$rclk$8) || !choice_rf29)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(195) CONSTRAINT(choice_rf27 || choice_rf28 || choice_rf29)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(196) CONSTRAINT(m#2 == m#1 || !choice_rf30)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(197) CONSTRAINT(m#2 == m#3 || !choice_rf31)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(198) CONSTRAINT(!(m#3$wclk$8 >= m#2$rclk$8) || !choice_rf31)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(199) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || choice_rf30 || choice_rf31)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(200) CONSTRAINT(n#2 == n#1 || !choice_rf32)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(201) CONSTRAINT(n#2 == n#3 || !choice_rf33)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(202) CONSTRAINT(!(n#3$wclk$8 >= n#2$rclk$8) || !choice_rf33)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(203) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || choice_rf32 || choice_rf33)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(204) CONSTRAINT(t1!0@1#3 == t1!0@1#1 || !choice_rf34)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(205) CONSTRAINT(t1!0@1#3 == t1!0@1#2 || !choice_rf35)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(206) CONSTRAINT(choice_rf34 || choice_rf35)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(207) CONSTRAINT(t1!0@1#4 == t1!0@1#1 || !choice_rf36)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(208) CONSTRAINT(t1!0@1#4 == t1!0@1#2 || !choice_rf37)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(209) CONSTRAINT(choice_rf36 || choice_rf37)
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(210) CONSTRAINT(t2!0@1#3 == t2!0@1#1 || !choice_rf38)
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(211) CONSTRAINT(t2!0@1#3 == t2!0@1#2 || !choice_rf39)
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(212) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf38 || choice_rf39)
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(213) CONSTRAINT(t2!0@1#4 == t2!0@1#1 || !choice_rf40)
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(214) CONSTRAINT(t2!0@1#4 == t2!0@1#2 || !choice_rf41)
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(215) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf40 || choice_rf41)
// 54 file <built-in-additions> line 7
(216) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_ws-ext42)
// 54 file <built-in-additions> line 7
(217) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext42)
// 54 file <built-in-additions> line 7
(218) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_ws-ext43)
// 54 file <built-in-additions> line 7
(219) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext43)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(220) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_ws-ext44)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(221) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8) || choice_ws-ext44)
// 57 file ../yogar-cbmc/ylz_example.c line 4
(222) CONSTRAINT(!(x#1$wclk$8 >= x#2$wclk$8) || !choice_ws-ext45)
// 57 file ../yogar-cbmc/ylz_example.c line 4
(223) CONSTRAINT(!(x#2$wclk$8 >= x#1$wclk$8) || choice_ws-ext45)
// 57 file ../yogar-cbmc/ylz_example.c line 4
(224) CONSTRAINT(!(x#1$wclk$8 >= x#3$wclk$8) || !choice_ws-ext46)
// 57 file ../yogar-cbmc/ylz_example.c line 4
(225) CONSTRAINT(!(x#3$wclk$8 >= x#1$wclk$8) || choice_ws-ext46)
// 58 file ../yogar-cbmc/ylz_example.c line 4
(226) CONSTRAINT(!(y#1$wclk$8 >= y#4$wclk$8) || !choice_ws-ext47)
// 58 file ../yogar-cbmc/ylz_example.c line 4
(227) CONSTRAINT(!(y#4$wclk$8 >= y#1$wclk$8) || choice_ws-ext47)
// 58 file ../yogar-cbmc/ylz_example.c line 4
(228) CONSTRAINT(!(y#1$wclk$8 >= y#5$wclk$8) || !choice_ws-ext48)
// 58 file ../yogar-cbmc/ylz_example.c line 4
(229) CONSTRAINT(!(y#5$wclk$8 >= y#1$wclk$8) || choice_ws-ext48)
// 55 file ../yogar-cbmc/ylz_example.c line 4
(230) CONSTRAINT(!(m#1$wclk$8 >= m#3$wclk$8) || !choice_ws-ext49)
// 55 file ../yogar-cbmc/ylz_example.c line 4
(231) CONSTRAINT(!(m#3$wclk$8 >= m#1$wclk$8) || choice_ws-ext49)
// 56 file ../yogar-cbmc/ylz_example.c line 4
(232) CONSTRAINT(!(n#1$wclk$8 >= n#3$wclk$8) || !choice_ws-ext50)
// 56 file ../yogar-cbmc/ylz_example.c line 4
(233) CONSTRAINT(!(n#3$wclk$8 >= n#1$wclk$8) || choice_ws-ext50)
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(234) CONSTRAINT(!(t1$17$spwnclk$8 >= y#2$rclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(235) CONSTRAINT(!(t1$17$spwnclk$8 >= x#2$wclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(236) CONSTRAINT(!(t1$17$spwnclk$8 >= y#3$rclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(237) CONSTRAINT(!(t1$17$spwnclk$8 >= m#3$wclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(238) CONSTRAINT(!(t1$17$spwnclk$8 >= x#3$wclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(239) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$rclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(240) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_threads_exited#5$wclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(241) CONSTRAINT(!(t1$21$spwnclk$8 >= x#4$rclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(242) CONSTRAINT(!(t1$21$spwnclk$8 >= y#4$wclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(243) CONSTRAINT(!(t1$21$spwnclk$8 >= x#5$rclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(244) CONSTRAINT(!(t1$21$spwnclk$8 >= n#3$wclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(245) CONSTRAINT(!(t1$21$spwnclk$8 >= y#5$wclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(246) CONSTRAINT(!(t1$21$spwnclk$8 >= __CPROVER_threads_exited#6$rclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(247) CONSTRAINT(!(t1$21$spwnclk$8 >= __CPROVER_threads_exited#7$wclk$8))
// 45 file <built-in-additions> line 10
(248) CONSTRAINT(!(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8))
// 46 file <built-in-additions> line 14
(249) CONSTRAINT(!(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8))
// 47 file <built-in-additions> line 12
(250) CONSTRAINT(!(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8))
// 48 file <built-in-additions> line 13
(251) CONSTRAINT(!(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8))
// 49 file <built-in-additions> line 15
(252) CONSTRAINT(!(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8))
// 50 file <built-in-additions> line 8
(253) CONSTRAINT(!(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8))
// 51 file <built-in-additions> line 29
(254) CONSTRAINT(!(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8))
// 54 file <built-in-additions> line 7
(255) CONSTRAINT(!(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8))
// 55 file ../yogar-cbmc/ylz_example.c line 4
(256) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= m#1$wclk$8))
// 56 file ../yogar-cbmc/ylz_example.c line 4
(257) CONSTRAINT(!(m#1$wclk$8 >= n#1$wclk$8))
// 57 file ../yogar-cbmc/ylz_example.c line 4
(258) CONSTRAINT(!(n#1$wclk$8 >= x#1$wclk$8))
// 58 file ../yogar-cbmc/ylz_example.c line 4
(259) CONSTRAINT(!(x#1$wclk$8 >= y#1$wclk$8))
// 0 file ../yogar-cbmc/ylz_example.c line 18 function main
(260) CONSTRAINT(!(y#1$wclk$8 >= t1!0@1#1$wclk$8))
// 1 file ../yogar-cbmc/ylz_example.c line 18 function main
(261) CONSTRAINT(!(t1!0@1#1$wclk$8 >= t2!0@1#1$wclk$8))
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(262) CONSTRAINT(!(t2!0@1#1$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8))
// 15 file <builtin-library-pthread_create> line 24 function pthread_create
(263) CONSTRAINT(!(__CPROVER_next_thread_id#2$wclk$8 >= t1!0@1#2$wclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(264) CONSTRAINT(!(t1!0@1#2$wclk$8 >= t1$17$spwnclk$8))
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(265) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_next_thread_id#3$rclk$8))
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(266) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8)
// 15 file <builtin-library-pthread_create> line 24 function pthread_create
(267) CONSTRAINT(!(__CPROVER_next_thread_id#5$wclk$8 >= t2!0@1#2$wclk$8))
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
(268) CONSTRAINT(!(t2!0@1#2$wclk$8 >= t1$21$spwnclk$8))
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(269) CONSTRAINT(!(t1$21$spwnclk$8 >= t1!0@1#3$rclk$8))
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(270) CONSTRAINT(!(t1!0@1#3$rclk$8 >= t1!0@1#4$rclk$8))
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(271) CONSTRAINT(!(t1!0@1#4$rclk$8 >= __CPROVER_next_thread_id#6$rclk$8))
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(272) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_threads_exited#2$rclk$8))
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(273) CONSTRAINT(!(__CPROVER_threads_exited#2$rclk$8 >= t2!0@1#3$rclk$8))
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(274) CONSTRAINT(!(t2!0@1#3$rclk$8 >= t2!0@1#4$rclk$8))
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(275) CONSTRAINT(!(t2!0@1#4$rclk$8 >= __CPROVER_next_thread_id#7$rclk$8))
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(276) CONSTRAINT(!(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_threads_exited#3$rclk$8))
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(277) CONSTRAINT(!(__CPROVER_threads_exited#3$rclk$8 >= m#2$rclk$8))
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(278) CONSTRAINT(!(m#2$rclk$8 >= n#2$rclk$8))
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(279) CONSTRAINT(!(y#2$rclk$8 >= x#2$wclk$8))
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(280) CONSTRAINT(!(x#2$wclk$8 >= y#3$rclk$8))
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(281) CONSTRAINT(!(y#3$rclk$8 >= m#3$wclk$8))
// 62 file ../yogar-cbmc/ylz_example.c line 8 function thr1
(282) CONSTRAINT(!(m#3$wclk$8 >= x#3$wclk$8))
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(283) CONSTRAINT(!(x#3$wclk$8 >= __CPROVER_threads_exited#4$rclk$8))
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(284) CONSTRAINT(!(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8))
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(285) CONSTRAINT(!(x#4$rclk$8 >= y#4$wclk$8))
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(286) CONSTRAINT(!(y#4$wclk$8 >= x#5$rclk$8))
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(287) CONSTRAINT(!(x#5$rclk$8 >= n#3$wclk$8))
// 67 file ../yogar-cbmc/ylz_example.c line 14 function thr2
(288) CONSTRAINT(!(n#3$wclk$8 >= y#5$wclk$8))
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(289) CONSTRAINT(!(y#5$wclk$8 >= __CPROVER_threads_exited#6$rclk$8))
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(290) CONSTRAINT(!(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8))
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(291) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf4 || \guard#3 || \guard#4)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(292) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf3 || \guard#3 || \guard#4)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(293) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf6)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(294) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf9)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(295) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf8)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(296) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(297) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf0 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(298) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf5 || \guard#3 || \guard#4)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(299) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf3 || \guard#3 || \guard#4)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(300) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf7)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(301) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf6)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(302) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf8)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(303) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf2 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(304) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf0 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(305) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf4 || \guard#3 || \guard#4)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(306) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf5 || \guard#3 || \guard#4)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(307) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf7)
// 28 file <builtin-library-pthread_create> line 42 function pthread_create
(308) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf9)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(309) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf1 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_join> line 29 function pthread_join
(310) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf2 || \guard#1 || \guard#2)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(311) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf15)
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(312) CONSTRAINT(!(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf10)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(313) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf12)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(314) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf15)
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(315) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8 || !choice_rf10)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(316) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf12)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(317) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf16)
// 14 file <builtin-library-pthread_create> line 21 function pthread_create
(318) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8 || !choice_rf11)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(319) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf13)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(320) CONSTRAINT(x#2$wclk$8 >= x#1$wclk$8 || !(x#5$rclk$8 >= x#1$wclk$8) || !choice_rf22)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(321) CONSTRAINT(x#1$wclk$8 >= x#2$wclk$8 || !(x#5$rclk$8 >= x#2$wclk$8) || !choice_rf21)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(322) CONSTRAINT(x#2$wclk$8 >= x#1$wclk$8 || !(x#4$rclk$8 >= x#1$wclk$8) || !choice_rf19)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(323) CONSTRAINT(x#1$wclk$8 >= x#2$wclk$8 || !(x#4$rclk$8 >= x#2$wclk$8) || !choice_rf18)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(324) CONSTRAINT(x#1$wclk$8 >= x#3$wclk$8 || !(x#5$rclk$8 >= x#3$wclk$8) || !choice_rf21)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(325) CONSTRAINT(x#3$wclk$8 >= x#1$wclk$8 || !(x#5$rclk$8 >= x#1$wclk$8) || !choice_rf23)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(326) CONSTRAINT(x#1$wclk$8 >= x#3$wclk$8 || !(x#4$rclk$8 >= x#3$wclk$8) || !choice_rf18)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(327) CONSTRAINT(x#3$wclk$8 >= x#1$wclk$8 || !(x#4$rclk$8 >= x#1$wclk$8) || !choice_rf20)
// 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
(328) CONSTRAINT(!(x#5$rclk$8 >= x#3$wclk$8) || !choice_rf22)
// 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
(329) CONSTRAINT(!(x#4$rclk$8 >= x#3$wclk$8) || !choice_rf19)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(330) CONSTRAINT(y#4$wclk$8 >= y#1$wclk$8 || !(y#3$rclk$8 >= y#1$wclk$8) || !choice_rf28)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(331) CONSTRAINT(y#1$wclk$8 >= y#4$wclk$8 || !(y#3$rclk$8 >= y#4$wclk$8) || !choice_rf27)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(332) CONSTRAINT(y#4$wclk$8 >= y#1$wclk$8 || !(y#2$rclk$8 >= y#1$wclk$8) || !choice_rf25)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(333) CONSTRAINT(y#1$wclk$8 >= y#4$wclk$8 || !(y#2$rclk$8 >= y#4$wclk$8) || !choice_rf24)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(334) CONSTRAINT(y#5$wclk$8 >= y#1$wclk$8 || !(y#3$rclk$8 >= y#1$wclk$8) || !choice_rf29)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(335) CONSTRAINT(y#1$wclk$8 >= y#5$wclk$8 || !(y#3$rclk$8 >= y#5$wclk$8) || !choice_rf27)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(336) CONSTRAINT(y#5$wclk$8 >= y#1$wclk$8 || !(y#2$rclk$8 >= y#1$wclk$8) || !choice_rf26)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(337) CONSTRAINT(y#1$wclk$8 >= y#5$wclk$8 || !(y#2$rclk$8 >= y#5$wclk$8) || !choice_rf24)
// 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
(338) CONSTRAINT(!(y#3$rclk$8 >= y#5$wclk$8) || !choice_rf28)
// 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
(339) CONSTRAINT(!(y#2$rclk$8 >= y#5$wclk$8) || !choice_rf25)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(340) CONSTRAINT(m#3$wclk$8 >= m#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(m#2$rclk$8 >= m#1$wclk$8) || !choice_rf31)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(341) CONSTRAINT(m#1$wclk$8 >= m#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(m#2$rclk$8 >= m#3$wclk$8) || !choice_rf30)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(342) CONSTRAINT(n#1$wclk$8 >= n#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(n#2$rclk$8 >= n#3$wclk$8) || !choice_rf32)
// 6 file ../yogar-cbmc/ylz_example.c line 23 function main
(343) CONSTRAINT(n#3$wclk$8 >= n#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(n#2$rclk$8 >= n#1$wclk$8) || !choice_rf33)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(344) CONSTRAINT(!(t1!0@1#4$rclk$8 >= t1!0@1#2$wclk$8) || !choice_rf36)
// 4 file ../yogar-cbmc/ylz_example.c line 21 function main
(345) CONSTRAINT(!(t1!0@1#3$rclk$8 >= t1!0@1#2$wclk$8) || !choice_rf34)
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(346) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(t2!0@1#3$rclk$8 >= t2!0@1#2$wclk$8) || !choice_rf38)
// 5 file ../yogar-cbmc/ylz_example.c line 22 function main
(347) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(t2!0@1#4$rclk$8 >= t2!0@1#2$wclk$8) || !choice_rf40)
