CBMC version 5.10 (cbmc-5.10-2-g2587beb) 64-bit x86_64 linux
Parsing test.c
Converting
Type-checking test
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
Shared x: 1R/2W
Shared y: 1R/2W
Shared r1: 1R/2W
Shared r2: 1R/2W
Shared main::1::t1!0@1: 2R/2W
Shared main::1::t2!0@1: 2R/2W
size of program expression: 361 steps
no slicing due to threads
Generated 1 VCC(s), 1 remaining after simplification

Program constraints:
// 68 
// 68 
// 45 file <built-in-additions> line 11
(1) SHARED_WRITE(__CPROVER_dead_object#1)
// 45 file <built-in-additions> line 11
(2) __CPROVER_dead_object#1 == NULL
// 46 file <built-in-additions> line 10
(3) SHARED_WRITE(__CPROVER_deallocated#1)
// 46 file <built-in-additions> line 10
(4) __CPROVER_deallocated#1 == NULL
// 47 file <built-in-additions> line 14
(5) SHARED_WRITE(__CPROVER_malloc_is_new_array#1)
// 47 file <built-in-additions> line 14
(6) __CPROVER_malloc_is_new_array#1 == FALSE
// 48 file <built-in-additions> line 12
(7) SHARED_WRITE(__CPROVER_malloc_object#1)
// 48 file <built-in-additions> line 12
(8) __CPROVER_malloc_object#1 == NULL
// 49 file <built-in-additions> line 13
(9) SHARED_WRITE(__CPROVER_malloc_size#1)
// 49 file <built-in-additions> line 13
(10) __CPROVER_malloc_size#1 == 0u
// 50 file <built-in-additions> line 15
(11) SHARED_WRITE(__CPROVER_memory_leak#1)
// 50 file <built-in-additions> line 15
(12) __CPROVER_memory_leak#1 == NULL
// 51 file <built-in-additions> line 8
(13) SHARED_WRITE(__CPROVER_next_thread_id#1)
// 51 file <built-in-additions> line 8
(14) __CPROVER_next_thread_id#1 == 0u
// 52 file <built-in-additions> line 29
(15) SHARED_WRITE(__CPROVER_pipe_count#1)
// 52 file <built-in-additions> line 29
(16) __CPROVER_pipe_count#1 == 0u
// 53 file <built-in-additions> line 20
(17) __CPROVER_rounding_mode!0#1 == 0
// 54 file <built-in-additions> line 6
(18) __CPROVER_thread_id!0#1 == 0u
// 55 file <built-in-additions> line 7
(19) SHARED_WRITE(__CPROVER_threads_exited#1)
// 55 file <built-in-additions> line 7
(20) __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
// 56 file test.c line 6
(21) SHARED_WRITE(r1#1)
// 56 file test.c line 6
(22) r1#1 == 0
// 57 file test.c line 7
(23) SHARED_WRITE(r2#1)
// 57 file test.c line 7
(24) r2#1 == 0
// 58 file test.c line 4
(25) SHARED_WRITE(x#1)
// 58 file test.c line 4
(26) x#1 == 0
// 59 file test.c line 5
(27) SHARED_WRITE(y#1)
// 59 file test.c line 5
(28) y#1 == 0
// 60 
// 69 
(29) ASSUME(argc'#0 >= 1) 
// 70 
(30) ASSUME(!(argc'#0 >= 268435457)) 
// 71 
// 72 
(31) SHARED_WRITE(argv'#1)
// 72 
(32) argv'#1 == argv'#0 WITH [argc'#0:=((char *)NULL)]
// 73 file test.c line 19
// 73 file test.c line 19
// 73 file test.c line 19
(33) argc!0@1#1 == argc'#0
// 73 file test.c line 19
(34) argv!0@1#1 == argv'
// 0 file test.c line 20 function main
// 0 file test.c line 20 function main
(35) SHARED_WRITE(t1!0@1#1)
// 1 file test.c line 20 function main
// 1 file test.c line 20 function main
(36) SHARED_WRITE(t2!0@1#1)
// 2 file test.c line 22 function main
// 2 file test.c line 22 function main
// 2 file test.c line 22 function main
(37) thread!0@1#1 == &t1!0@1
// 2 file test.c line 22 function main
(38) attr!0@1#1 == ((union pthread_attr_t { char __size[56]; signed int __align; } *)NULL)
// 2 file test.c line 22 function main
(39) start_routine!0@1#1 == thr1
// 2 file test.c line 22 function main
(40) arg!0@1#1 == NULL
// 11 file <builtin-library-pthread_create> line 18 function pthread_create
// 12 file <builtin-library-pthread_create> line 19 function pthread_create
// 13 file <builtin-library-pthread_create> line 20 function pthread_create
(41) __CPROVER_next_thread_id#2 == 1u
// 14 file <builtin-library-pthread_create> line 20 function pthread_create
(42) this_thread_id!0@1#2 == 1u
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(43) SHARED_WRITE(__CPROVER_next_thread_id#2)
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
// 16 file <builtin-library-pthread_create> line 24 function pthread_create
(44) SHARED_WRITE(t1!0@1#2)
// 16 file <builtin-library-pthread_create> line 24 function pthread_create
(45) t1!0@1#2 == 1u
// 17 file <builtin-library-pthread_create> line 30 function pthread_create
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(46) thread!1@0#1 == &t1!0@1
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(47) attr!1@0#1 == ((union pthread_attr_t { char __size[56]; signed int __align; } *)NULL)
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(48) start_routine!1@0#1 == thr1
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(49) arg!1@0#1 == NULL
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(50) pthread_join#return_value!1#1 == 0
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(51) pthread_create#return_value!1#1 == 0
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(52) main#return_value!1#1 == 0
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(53) __CPROVER_thread_id!1#1 == 0u
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(54) thr1#return_value!1#1 == NULL
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(55) __CPROVER_rounding_mode!1#1 == 0
// 20 file <builtin-library-pthread_create> line 32 function pthread_create
// 31 file <builtin-library-pthread_create> line 44 function pthread_create
(56) pthread_create#return_value!0#1 == 0
// 33 file <builtin-library-pthread_create> line 45 function pthread_create
// 3 file test.c line 23 function main
// 3 file test.c line 23 function main
// 3 file test.c line 23 function main
(57) thread!0@2#1 == &t2!0@1
// 3 file test.c line 23 function main
(58) attr!0@2#1 == ((union pthread_attr_t { char __size[56]; signed int __align; } *)NULL)
// 3 file test.c line 23 function main
(59) start_routine!0@2#1 == (const void * (*)(const void *))thr2
// 3 file test.c line 23 function main
(60) arg!0@2#1 == NULL
// 11 file <builtin-library-pthread_create> line 18 function pthread_create
// 12 file <builtin-library-pthread_create> line 19 function pthread_create
// 13 file <builtin-library-pthread_create> line 20 function pthread_create
(61) __CPROVER_next_thread_id#4 == __CPROVER_next_thread_id#3
// 13 file <builtin-library-pthread_create> line 20 function pthread_create
(62) __CPROVER_next_thread_id#5 == 1u + __CPROVER_next_thread_id#4
// 14 file <builtin-library-pthread_create> line 20 function pthread_create
(63) this_thread_id!0@2#2 == __CPROVER_next_thread_id#5
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(64) SHARED_READ(__CPROVER_next_thread_id#3)
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(65) SHARED_WRITE(__CPROVER_next_thread_id#5)
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
// 16 file <builtin-library-pthread_create> line 24 function pthread_create
(66) SHARED_WRITE(t2!0@1#2)
// 16 file <builtin-library-pthread_create> line 24 function pthread_create
(67) t2!0@1#2 == this_thread_id!0@2#2
// 17 file <builtin-library-pthread_create> line 30 function pthread_create
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(68) thread!2@0#1 == &t2!0@1
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(69) attr!2@0#1 == ((union pthread_attr_t { char __size[56]; signed int __align; } *)NULL)
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(70) start_routine!2@0#1 == (const void * (*)(const void *))thr2
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(71) arg!2@0#1 == NULL
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(72) pthread_join#return_value!2#1 == 0
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(73) pthread_create#return_value!2#1 == 0
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(74) main#return_value!2#1 == 0
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(75) __CPROVER_thread_id!2#1 == 0u
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(76) thr1#return_value!2#1 == NULL
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(77) __CPROVER_rounding_mode!2#1 == 0
// 20 file <builtin-library-pthread_create> line 32 function pthread_create
// 31 file <builtin-library-pthread_create> line 44 function pthread_create
(78) pthread_create#return_value!0#2 == 0
// 33 file <builtin-library-pthread_create> line 45 function pthread_create
// 4 file test.c line 25 function main
// 4 file test.c line 25 function main
// 4 file test.c line 25 function main
(79) SHARED_READ(t1!0@1#3)
// 4 file test.c line 25 function main
(80) SHARED_READ(t1!0@1#4)
// 4 file test.c line 25 function main
(81) thread!0@1#1 == t1!0@1#4
// 4 file test.c line 25 function main
(82) value_ptr!0@1#1 == ((const void **)NULL)
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(83) SHARED_READ(__CPROVER_next_thread_id#6)
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(84) \guard#1 == !(__CPROVER_next_thread_id#6 >= thread!0@1#1)
// 35 file <builtin-library-pthread_join> line 25 function pthread_join
(85) pthread_join#return_value!0#1 == 3
     guard: \guard#1
// 36 file <builtin-library-pthread_join> line 25 function pthread_join
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
(86) pthread_join#return_value!0#2 == pthread_join#return_value!0#0
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
(87) \guard#2 == (thread!0@1#1 == 0u)
// 38 file <builtin-library-pthread_join> line 26 function pthread_join
(88) pthread_join#return_value!0#3 == 35
     guard: !\guard#1 && \guard#2
// 39 file <builtin-library-pthread_join> line 26 function pthread_join
// 40 file <builtin-library-pthread_join> line 27 function pthread_join
(89) pthread_join#return_value!0#4 == pthread_join#return_value!0#2
// 40 file <builtin-library-pthread_join> line 27 function pthread_join
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(90) SHARED_READ(__CPROVER_threads_exited#2)
     guard: !\guard#1 && !\guard#2
// 43 file <builtin-library-pthread_join> line 30 function pthread_join
(91) pthread_join#return_value!0#5 == 0
     guard: !\guard#1 && !\guard#2 && __CPROVER_threads_exited#2[(signed int)thread!0@1#1]
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
(92) pthread_join#return_value!0#6 == (\guard#2 ? 35 : 0)
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
(93) pthread_join#return_value!0#7 == (\guard#1 ? 3 : pthread_join#return_value!0#6)
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
// 5 file test.c line 26 function main
// 5 file test.c line 26 function main
// 5 file test.c line 26 function main
(94) SHARED_READ(t2!0@1#3)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 5 file test.c line 26 function main
(95) SHARED_READ(t2!0@1#4)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 5 file test.c line 26 function main
(96) thread!0@2#1 == t2!0@1#4
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 5 file test.c line 26 function main
(97) value_ptr!0@2#1 == ((const void **)NULL)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(98) SHARED_READ(__CPROVER_next_thread_id#7)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(99) \guard#3 == !(__CPROVER_next_thread_id#7 >= thread!0@2#1)
// 35 file <builtin-library-pthread_join> line 25 function pthread_join
(100) pthread_join#return_value!0#8 == 3
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && \guard#3
// 36 file <builtin-library-pthread_join> line 25 function pthread_join
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
(101) pthread_join#return_value!0#9 == pthread_join#return_value!0#7
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
(102) \guard#4 == (thread!0@2#1 == 0u)
// 38 file <builtin-library-pthread_join> line 26 function pthread_join
(103) pthread_join#return_value!0#10 == 35
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && \guard#4
// 39 file <builtin-library-pthread_join> line 26 function pthread_join
// 40 file <builtin-library-pthread_join> line 27 function pthread_join
(104) pthread_join#return_value!0#11 == pthread_join#return_value!0#9
// 40 file <builtin-library-pthread_join> line 27 function pthread_join
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(105) SHARED_READ(__CPROVER_threads_exited#3)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && !\guard#4
// 43 file <builtin-library-pthread_join> line 30 function pthread_join
(106) pthread_join#return_value!0#12 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && !\guard#4 && __CPROVER_threads_exited#3[(signed int)thread!0@2#1]
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
(107) pthread_join#return_value!0#13 == (\guard#4 ? 35 : 0)
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
(108) pthread_join#return_value!0#14 == (\guard#3 ? 3 : pthread_join#return_value!0#13)
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
// 6 file test.c line 28 function main
(109) SHARED_READ(r1#2)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 6 file test.c line 28 function main
(110) SHARED_READ(r2#2)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 6 file test.c line 28 function main
(111) ASSERT((!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) ==> !(r1#2 == 0) || !(r2#2 == 0)) 
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 7 file test.c line 29 function main
(112) main#return_value!0#1 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 10 file test.c line 30 function main
// 74 file test.c line 19
(113) return!0#1 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 76 file test.c line 19
// 77 
// 21 file <builtin-library-pthread_create> line 33 function pthread_create
(114) __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
// 23 file <builtin-library-pthread_create> line 39 function pthread_create
// 24 file <builtin-library-pthread_create> line 39 function pthread_create
// 27 file <builtin-library-pthread_create> line 39 function pthread_create
// 27 file <builtin-library-pthread_create> line 39 function pthread_create
// 27 file <builtin-library-pthread_create> line 39 function pthread_create
(115) arg!1@1#1 == NULL
// 61 file test.c line 10 function thr1
(116) SHARED_READ(x#2)
// 61 file test.c line 10 function thr1
(117) SHARED_WRITE(r1#3)
// 61 file test.c line 10 function thr1
(118) r1#3 == x#2
// 62 file test.c line 11 function thr1
(119) SHARED_WRITE(y#2)
// 62 file test.c line 11 function thr1
(120) y#2 == 1
// 63 file test.c line 12 function thr1
(121) thr1#return_value!1#2 == nondet_symbol(symex::nondet0)
// 64 file test.c line 12 function thr1
// 28 file <builtin-library-pthread_create> line 40 function pthread_create
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(122) SHARED_READ(__CPROVER_threads_exited#4)
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(123) SHARED_WRITE(__CPROVER_threads_exited#5)
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(124) __CPROVER_threads_exited#5 == __CPROVER_threads_exited#4 WITH [(signed int)this_thread_id!1@0#0:=TRUE]
// 33 file <builtin-library-pthread_create> line 45 function pthread_create
// 21 file <builtin-library-pthread_create> line 33 function pthread_create
(125) __CPROVER_thread_id!2#2 == this_thread_id!2@0#0
// 23 file <builtin-library-pthread_create> line 39 function pthread_create
// 25 file <builtin-library-pthread_create> line 39 function pthread_create
// 25 file <builtin-library-pthread_create> line 39 function pthread_create
// 25 file <builtin-library-pthread_create> line 39 function pthread_create
(126) arg!2@1#1 == NULL
// 65 file test.c line 15 function thr2
(127) SHARED_READ(y#3)
// 65 file test.c line 15 function thr2
(128) SHARED_WRITE(r2#3)
// 65 file test.c line 15 function thr2
(129) r2#3 == y#3
// 66 file test.c line 16 function thr2
(130) SHARED_WRITE(x#3)
// 66 file test.c line 16 function thr2
(131) x#3 == 1
// 67 file test.c line 17 function thr2
// 26 file <builtin-library-pthread_create> line 39 function pthread_create
// 28 file <builtin-library-pthread_create> line 40 function pthread_create
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(132) SHARED_READ(__CPROVER_threads_exited#6)
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(133) SHARED_WRITE(__CPROVER_threads_exited#7)
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(134) __CPROVER_threads_exited#7 == __CPROVER_threads_exited#6 WITH [(signed int)this_thread_id!2@0#0:=TRUE]
// 33 file <builtin-library-pthread_create> line 45 function pthread_create
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(135) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(136) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#5 || !choice_rf1) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(137) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(138) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#7 || !choice_rf2) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(139) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf2) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(140) CONSTRAINT(choice_rf0 || choice_rf1 || choice_rf2 || \guard#1 || \guard#2) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(141) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf3) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(142) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#5 || !choice_rf4) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(143) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf4) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(144) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#7 || !choice_rf5) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(145) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf5) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(146) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf3 || choice_rf4 || choice_rf5 || \guard#3 || \guard#4) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(147) CONSTRAINT(__CPROVER_threads_exited#4 == __CPROVER_threads_exited#1 || !choice_rf6) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(148) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$rclk$8) || !choice_rf6) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(149) CONSTRAINT(__CPROVER_threads_exited#4 == __CPROVER_threads_exited#7 || !choice_rf7) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(150) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#4$rclk$8) || !choice_rf7) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(151) CONSTRAINT(choice_rf6 || choice_rf7) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(152) CONSTRAINT(__CPROVER_threads_exited#6 == __CPROVER_threads_exited#1 || !choice_rf8) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(153) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#6$rclk$8) || !choice_rf8) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(154) CONSTRAINT(__CPROVER_threads_exited#6 == __CPROVER_threads_exited#5 || !choice_rf9) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(155) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#6$rclk$8) || !choice_rf9) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(156) CONSTRAINT(choice_rf8 || choice_rf9) 
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(157) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf10) 
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(158) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 || !choice_rf11) 
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(159) CONSTRAINT(choice_rf10 || choice_rf11) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(160) CONSTRAINT(__CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#1 || !choice_rf12) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(161) CONSTRAINT(__CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#2 || !choice_rf13) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(162) CONSTRAINT(__CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#5 || !choice_rf14) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(163) CONSTRAINT(choice_rf12 || choice_rf13 || choice_rf14) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(164) CONSTRAINT(__CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#1 || !choice_rf15) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(165) CONSTRAINT(__CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#2 || !choice_rf16) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(166) CONSTRAINT(__CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#5 || !choice_rf17) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(167) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf15 || choice_rf16 || choice_rf17) 
// 61 file test.c line 10 function thr1
(168) CONSTRAINT(x#2 == x#1 || !choice_rf18) 
// 61 file test.c line 10 function thr1
(169) CONSTRAINT(!(x#1$wclk$8 >= x#2$rclk$8) || !choice_rf18) 
// 61 file test.c line 10 function thr1
(170) CONSTRAINT(x#2 == x#3 || !choice_rf19) 
// 61 file test.c line 10 function thr1
(171) CONSTRAINT(!(x#3$wclk$8 >= x#2$rclk$8) || !choice_rf19) 
// 61 file test.c line 10 function thr1
(172) CONSTRAINT(choice_rf18 || choice_rf19) 
// 65 file test.c line 15 function thr2
(173) CONSTRAINT(y#3 == y#1 || !choice_rf20) 
// 65 file test.c line 15 function thr2
(174) CONSTRAINT(!(y#1$wclk$8 >= y#3$rclk$8) || !choice_rf20) 
// 65 file test.c line 15 function thr2
(175) CONSTRAINT(y#3 == y#2 || !choice_rf21) 
// 65 file test.c line 15 function thr2
(176) CONSTRAINT(!(y#2$wclk$8 >= y#3$rclk$8) || !choice_rf21) 
// 65 file test.c line 15 function thr2
(177) CONSTRAINT(choice_rf20 || choice_rf21) 
// 6 file test.c line 28 function main
(178) CONSTRAINT(r1#2 == r1#1 || !choice_rf22) 
// 6 file test.c line 28 function main
(179) CONSTRAINT(r1#2 == r1#3 || !choice_rf23) 
// 6 file test.c line 28 function main
(180) CONSTRAINT(!(r1#3$wclk$8 >= r1#2$rclk$8) || !choice_rf23) 
// 6 file test.c line 28 function main
(181) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || choice_rf22 || choice_rf23) 
// 6 file test.c line 28 function main
(182) CONSTRAINT(r2#2 == r2#1 || !choice_rf24) 
// 6 file test.c line 28 function main
(183) CONSTRAINT(r2#2 == r2#3 || !choice_rf25) 
// 6 file test.c line 28 function main
(184) CONSTRAINT(!(r2#3$wclk$8 >= r2#2$rclk$8) || !choice_rf25) 
// 6 file test.c line 28 function main
(185) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || choice_rf24 || choice_rf25) 
// 4 file test.c line 25 function main
(186) CONSTRAINT(t1!0@1#3 == t1!0@1#1 || !choice_rf26) 
// 4 file test.c line 25 function main
(187) CONSTRAINT(t1!0@1#3 == t1!0@1#2 || !choice_rf27) 
// 4 file test.c line 25 function main
(188) CONSTRAINT(choice_rf26 || choice_rf27) 
// 4 file test.c line 25 function main
(189) CONSTRAINT(t1!0@1#4 == t1!0@1#1 || !choice_rf28) 
// 4 file test.c line 25 function main
(190) CONSTRAINT(t1!0@1#4 == t1!0@1#2 || !choice_rf29) 
// 4 file test.c line 25 function main
(191) CONSTRAINT(choice_rf28 || choice_rf29) 
// 5 file test.c line 26 function main
(192) CONSTRAINT(t2!0@1#3 == t2!0@1#1 || !choice_rf30) 
// 5 file test.c line 26 function main
(193) CONSTRAINT(t2!0@1#3 == t2!0@1#2 || !choice_rf31) 
// 5 file test.c line 26 function main
(194) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf30 || choice_rf31) 
// 5 file test.c line 26 function main
(195) CONSTRAINT(t2!0@1#4 == t2!0@1#1 || !choice_rf32) 
// 5 file test.c line 26 function main
(196) CONSTRAINT(t2!0@1#4 == t2!0@1#2 || !choice_rf33) 
// 5 file test.c line 26 function main
(197) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf32 || choice_rf33) 
// 55 file <built-in-additions> line 7
(198) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_ws-ext34) 
// 55 file <built-in-additions> line 7
(199) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext34) 
// 55 file <built-in-additions> line 7
(200) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_ws-ext35) 
// 55 file <built-in-additions> line 7
(201) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext35) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(202) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_ws-ext36) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(203) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8) || choice_ws-ext36) 
// 58 file test.c line 4
(204) CONSTRAINT(!(x#1$wclk$8 >= x#3$wclk$8) || !choice_ws-ext37) 
// 58 file test.c line 4
(205) CONSTRAINT(!(x#3$wclk$8 >= x#1$wclk$8) || choice_ws-ext37) 
// 59 file test.c line 5
(206) CONSTRAINT(!(y#1$wclk$8 >= y#2$wclk$8) || !choice_ws-ext38) 
// 59 file test.c line 5
(207) CONSTRAINT(!(y#2$wclk$8 >= y#1$wclk$8) || choice_ws-ext38) 
// 56 file test.c line 6
(208) CONSTRAINT(!(r1#1$wclk$8 >= r1#3$wclk$8) || !choice_ws-ext39) 
// 56 file test.c line 6
(209) CONSTRAINT(!(r1#3$wclk$8 >= r1#1$wclk$8) || choice_ws-ext39) 
// 57 file test.c line 7
(210) CONSTRAINT(!(r2#1$wclk$8 >= r2#3$wclk$8) || !choice_ws-ext40) 
// 57 file test.c line 7
(211) CONSTRAINT(!(r2#3$wclk$8 >= r2#1$wclk$8) || choice_ws-ext40) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(212) CONSTRAINT(!(t1$18$spwnclk$8 >= x#2$rclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(213) CONSTRAINT(!(t1$18$spwnclk$8 >= r1#3$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(214) CONSTRAINT(!(t1$18$spwnclk$8 >= y#2$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(215) CONSTRAINT(!(t1$18$spwnclk$8 >= __CPROVER_threads_exited#4$rclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(216) CONSTRAINT(!(t1$18$spwnclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(217) CONSTRAINT(!(t1$22$spwnclk$8 >= y#3$rclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(218) CONSTRAINT(!(t1$22$spwnclk$8 >= r2#3$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(219) CONSTRAINT(!(t1$22$spwnclk$8 >= x#3$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(220) CONSTRAINT(!(t1$22$spwnclk$8 >= __CPROVER_threads_exited#6$rclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(221) CONSTRAINT(!(t1$22$spwnclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 46 file <built-in-additions> line 10
(222) CONSTRAINT(!(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)) 
// 47 file <built-in-additions> line 14
(223) CONSTRAINT(!(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)) 
// 48 file <built-in-additions> line 12
(224) CONSTRAINT(!(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)) 
// 49 file <built-in-additions> line 13
(225) CONSTRAINT(!(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)) 
// 50 file <built-in-additions> line 15
(226) CONSTRAINT(!(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)) 
// 51 file <built-in-additions> line 8
(227) CONSTRAINT(!(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)) 
// 52 file <built-in-additions> line 29
(228) CONSTRAINT(!(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)) 
// 55 file <built-in-additions> line 7
(229) CONSTRAINT(!(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 56 file test.c line 6
(230) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= r1#1$wclk$8)) 
// 57 file test.c line 7
(231) CONSTRAINT(!(r1#1$wclk$8 >= r2#1$wclk$8)) 
// 58 file test.c line 4
(232) CONSTRAINT(!(r2#1$wclk$8 >= x#1$wclk$8)) 
// 59 file test.c line 5
(233) CONSTRAINT(!(x#1$wclk$8 >= y#1$wclk$8)) 
// 72 
(234) CONSTRAINT(!(y#1$wclk$8 >= argv'#1$wclk$8)) 
// 0 file test.c line 20 function main
(235) CONSTRAINT(!(argv'#1$wclk$8 >= t1!0@1#1$wclk$8)) 
// 1 file test.c line 20 function main
(236) CONSTRAINT(!(t1!0@1#1$wclk$8 >= t2!0@1#1$wclk$8)) 
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(237) CONSTRAINT(!(t2!0@1#1$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)) 
// 16 file <builtin-library-pthread_create> line 24 function pthread_create
(238) CONSTRAINT(!(__CPROVER_next_thread_id#2$wclk$8 >= t1!0@1#2$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(239) CONSTRAINT(!(t1!0@1#2$wclk$8 >= t1$18$spwnclk$8)) 
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(240) CONSTRAINT(!(t1$18$spwnclk$8 >= __CPROVER_next_thread_id#3$rclk$8)) 
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(241) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8) 
// 16 file <builtin-library-pthread_create> line 24 function pthread_create
(242) CONSTRAINT(!(__CPROVER_next_thread_id#5$wclk$8 >= t2!0@1#2$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 32 function pthread_create
(243) CONSTRAINT(!(t2!0@1#2$wclk$8 >= t1$22$spwnclk$8)) 
// 4 file test.c line 25 function main
(244) CONSTRAINT(!(t1$22$spwnclk$8 >= t1!0@1#3$rclk$8)) 
// 4 file test.c line 25 function main
(245) CONSTRAINT(!(t1!0@1#3$rclk$8 >= t1!0@1#4$rclk$8)) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(246) CONSTRAINT(!(t1!0@1#4$rclk$8 >= __CPROVER_next_thread_id#6$rclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(247) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)) 
// 5 file test.c line 26 function main
(248) CONSTRAINT(!(__CPROVER_threads_exited#2$rclk$8 >= t2!0@1#3$rclk$8)) 
// 5 file test.c line 26 function main
(249) CONSTRAINT(!(t2!0@1#3$rclk$8 >= t2!0@1#4$rclk$8)) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(250) CONSTRAINT(!(t2!0@1#4$rclk$8 >= __CPROVER_next_thread_id#7$rclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(251) CONSTRAINT(!(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_threads_exited#3$rclk$8)) 
// 6 file test.c line 28 function main
(252) CONSTRAINT(!(__CPROVER_threads_exited#3$rclk$8 >= r1#2$rclk$8)) 
// 6 file test.c line 28 function main
(253) CONSTRAINT(!(r1#2$rclk$8 >= r2#2$rclk$8)) 
// 61 file test.c line 10 function thr1
(254) CONSTRAINT(!(x#2$rclk$8 >= r1#3$wclk$8)) 
// 62 file test.c line 11 function thr1
(255) CONSTRAINT(!(r1#3$wclk$8 >= y#2$wclk$8)) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(256) CONSTRAINT(!(y#2$wclk$8 >= __CPROVER_threads_exited#4$rclk$8)) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(257) CONSTRAINT(!(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 65 file test.c line 15 function thr2
(258) CONSTRAINT(!(y#3$rclk$8 >= r2#3$wclk$8)) 
// 66 file test.c line 16 function thr2
(259) CONSTRAINT(!(r2#3$wclk$8 >= x#3$wclk$8)) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(260) CONSTRAINT(!(x#3$wclk$8 >= __CPROVER_threads_exited#6$rclk$8)) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(261) CONSTRAINT(!(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(262) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf9) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(263) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf8) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(264) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || \guard#1 || \guard#2) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(265) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf0 || \guard#1 || \guard#2) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(266) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf6) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(267) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf4 || \guard#3 || \guard#4) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(268) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf3 || \guard#3 || \guard#4) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(269) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf8) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(270) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf2 || \guard#1 || \guard#2) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(271) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf0 || \guard#1 || \guard#2) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(272) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf7) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(273) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf6) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(274) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf5 || \guard#3 || \guard#4) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(275) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf3 || \guard#3 || \guard#4) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(276) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf9) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(277) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf1 || \guard#1 || \guard#2) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(278) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf2 || \guard#1 || \guard#2) 
// 29 file <builtin-library-pthread_create> line 42 function pthread_create
(279) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf7) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(280) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf4 || \guard#3 || \guard#4) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(281) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf5 || \guard#3 || \guard#4) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(282) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf12) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(283) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf15) 
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(284) CONSTRAINT(!(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf10) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(285) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf12) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(286) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf15) 
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(287) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8 || !choice_rf10) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(288) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf13) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(289) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf16) 
// 15 file <builtin-library-pthread_create> line 21 function pthread_create
(290) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8 || !choice_rf11) 
// 61 file test.c line 10 function thr1
(291) CONSTRAINT(x#3$wclk$8 >= x#1$wclk$8 || !(x#2$rclk$8 >= x#1$wclk$8) || !choice_rf19) 
// 61 file test.c line 10 function thr1
(292) CONSTRAINT(x#1$wclk$8 >= x#3$wclk$8 || !(x#2$rclk$8 >= x#3$wclk$8) || !choice_rf18) 
// 65 file test.c line 15 function thr2
(293) CONSTRAINT(y#1$wclk$8 >= y#2$wclk$8 || !(y#3$rclk$8 >= y#2$wclk$8) || !choice_rf20) 
// 65 file test.c line 15 function thr2
(294) CONSTRAINT(y#2$wclk$8 >= y#1$wclk$8 || !(y#3$rclk$8 >= y#1$wclk$8) || !choice_rf21) 
// 6 file test.c line 28 function main
(295) CONSTRAINT(r1#1$wclk$8 >= r1#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(r1#2$rclk$8 >= r1#3$wclk$8) || !choice_rf22) 
// 6 file test.c line 28 function main
(296) CONSTRAINT(r1#3$wclk$8 >= r1#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(r1#2$rclk$8 >= r1#1$wclk$8) || !choice_rf23) 
// 6 file test.c line 28 function main
(297) CONSTRAINT(r2#3$wclk$8 >= r2#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(r2#2$rclk$8 >= r2#1$wclk$8) || !choice_rf25) 
// 6 file test.c line 28 function main
(298) CONSTRAINT(r2#1$wclk$8 >= r2#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(r2#2$rclk$8 >= r2#3$wclk$8) || !choice_rf24) 
// 4 file test.c line 25 function main
(299) CONSTRAINT(!(t1!0@1#3$rclk$8 >= t1!0@1#2$wclk$8) || !choice_rf26) 
// 4 file test.c line 25 function main
(300) CONSTRAINT(!(t1!0@1#4$rclk$8 >= t1!0@1#2$wclk$8) || !choice_rf28) 
// 5 file test.c line 26 function main
(301) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(t2!0@1#4$rclk$8 >= t2!0@1#2$wclk$8) || !choice_rf32) 
// 5 file test.c line 26 function main
(302) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(t2!0@1#3$rclk$8 >= t2!0@1#2$wclk$8) || !choice_rf30) 
