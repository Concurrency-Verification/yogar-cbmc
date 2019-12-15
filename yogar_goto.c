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
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

main /* main */
        // 0 no location
        __CPROVER_initialize();
        // 1 no location
        ASSUME argc' >= 1
        // 2 no location
        ASSUME argc' <= 268435456
        // 3 no location
        argv'[argc'] = ((char *)NULL);
        // 4 file test.c line 19
        main(argc', argv');
        // 5 no location
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__CPROVER_initialize /* c::__CPROVER_initialize */
        // 6 file test.c line 4
        x = 0;
        // 7 file test.c line 5
        y = 0;
        // 8 file test.c line 6
        r1 = 0;
        // 9 file test.c line 7
        r2 = 0;
        // 10 file <built-in-additions> line 30
        __CPROVER_deallocated = NULL;
        // 11 file <built-in-additions> line 31
        __CPROVER_dead_object = NULL;
        // 12 file <built-in-additions> line 32
        __CPROVER_malloc_object = NULL;
        // 13 file <built-in-additions> line 33
        __CPROVER_malloc_size = 0u;
        // 14 file <built-in-additions> line 34
        __CPROVER_malloc_is_new_array = 0 != 0;
        // 15 file <built-in-additions> line 35
        __CPROVER_memory_leak = NULL;
        // 16 file <built-in-additions> line 57
        __CPROVER_rounding_mode = 0;
        // 17 file <built-in-additions> line 78
        __CPROVER_pipe_count = (unsigned int)0;
        // 18 file <built-in-additions> line 21
        __CPROVER_thread_id = (unsigned long int)0;
        // 19 file <built-in-additions> line 22
        __CPROVER_threads_exited = ARRAY_OF(FALSE);
        // 20 file <built-in-additions> line 23
        __CPROVER_next_thread_id = (unsigned long int)0;
        // 21 no location
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

pthread_create /* c::pthread_create */
        // 22 file <builtin-library>-pthread_create line 32 function pthread_create
        // Labels: __CPROVER_HIDE
        SKIP
        // 23 file <builtin-library>-pthread_create line 33 function pthread_create
        unsigned long int this_thread_id;
        // 24 file <builtin-library>-pthread_create line 34 function pthread_create
        ATOMIC_BEGIN
        // 25 file <builtin-library>-pthread_create line 35 function pthread_create
        __CPROVER_next_thread_id = __CPROVER_next_thread_id + 1ul;
        // 26 file <builtin-library>-pthread_create line 35 function pthread_create
        this_thread_id = __CPROVER_next_thread_id;
        // 27 file <builtin-library>-pthread_create line 36 function pthread_create
        ATOMIC_END
        // 28 file <builtin-library>-pthread_create line 38 function pthread_create
        IF !(thread != ((unsigned long int *)NULL)) THEN GOTO 1
        // 29 file <builtin-library>-pthread_create line 44 function pthread_create
        *thread = this_thread_id;
        // 30 file <builtin-library>-pthread_create line 48 function pthread_create
     1: IF !(attr != ((const union pthread_attr_t *)NULL)) THEN GOTO 2
        // 31 file <builtin-library>-pthread_create line 48 function pthread_create
        (void)*attr;
        // 32 file <builtin-library>-pthread_create line 49 function pthread_create
     2: __actual_thread_spawn(start_routine, arg, this_thread_id);
        // 33 file <builtin-library>-pthread_create line 51 function pthread_create
        pthread_create#return_value = 0;
        // 34 file <builtin-library>-pthread_create line 51 function pthread_create
        GOTO 3
        // 35 file <builtin-library>-pthread_create line 52 function pthread_create
        dead this_thread_id;
        // 36 file <builtin-library>-pthread_create line 52 function pthread_create
     3: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

pthread_join /* c::pthread_join */
        // 37 file <builtin-library>-pthread_join line 18 function pthread_join
        // Labels: __CPROVER_HIDE
        SKIP
        // 38 file <builtin-library>-pthread_join line 19 function pthread_join
        IF !((unsigned long int)thread > __CPROVER_next_thread_id) THEN GOTO 1
        // 39 file <builtin-library>-pthread_join line 19 function pthread_join
        pthread_join#return_value = 3;
        // 40 file <builtin-library>-pthread_join line 19 function pthread_join
        GOTO 4
        // 41 file <builtin-library>-pthread_join line 20 function pthread_join
     1: IF !((unsigned long int)thread == __CPROVER_thread_id) THEN GOTO 2
        // 42 file <builtin-library>-pthread_join line 20 function pthread_join
        pthread_join#return_value = 35;
        // 43 file <builtin-library>-pthread_join line 20 function pthread_join
        GOTO 4
        // 44 file <builtin-library>-pthread_join line 21 function pthread_join
     2: IF !(value_ptr != ((void **)NULL)) THEN GOTO 3
        // 45 file <builtin-library>-pthread_join line 21 function pthread_join
        (void)*(*((char **)value_ptr));
        // 46 file <builtin-library>-pthread_join line 22 function pthread_join
     3: ASSUME __CPROVER_threads_exited[(signed int)(unsigned long int)thread]
        // 47 file <builtin-library>-pthread_join line 23 function pthread_join
        pthread_join#return_value = 0;
        // 48 file <builtin-library>-pthread_join line 23 function pthread_join
        GOTO 4
        // 49 file <builtin-library>-pthread_join line 24 function pthread_join
     4: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

thr1 /* c::thr1 */
        // 50 file test.c line 10 function thr1
        r1 = x;
        // 51 file test.c line 11 function thr1
        y = 1;
        // 52 file test.c line 12 function thr1
        thr1#return_value = NONDET(void *);
        // 53 file test.c line 12 function thr1
        GOTO 1
        // 54 file test.c line 12 function thr1
     1: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

thr2 /* c::thr2 */
        // 55 file test.c line 15 function thr2
        r2 = y;
        // 56 file test.c line 16 function thr2
        x = 1;
        // 57 file test.c line 17 function thr2
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

main /* c::main */
        // 58 file test.c line 20 function main
        unsigned long int t1;
        // 59 file test.c line 20 function main
        unsigned long int t2;
        // 60 file test.c line 22 function main
        pthread_create(&t1, ((const union pthread_attr_t *)NULL), thr1, NULL);
        // 61 file test.c line 23 function main
        pthread_create(&t2, ((const union pthread_attr_t *)NULL), (void * (*)(void *))thr2, NULL);
        // 62 file test.c line 25 function main
        pthread_join(t1, (void **)NULL);
        // 63 file test.c line 26 function main
        pthread_join(t2, (void **)NULL);
        // 64 file test.c line 28 function main
        IF !(r1 == 0) THEN GOTO 1
        // 65 file test.c line 28 function main
        IF !(r2 == 0) THEN GOTO 1
        // 66 file test.c line 28 function main
        GOTO 2
        // 67 file test.c line 28 function main
     1: (void)0;
        // 68 file test.c line 28 function main
        GOTO 3
        // 69 file test.c line 28 function main
     2: ASSERT FALSE // assertion !(r1==0 && r2==0)
        // 70 file test.c line 29 function main
     3: main#return_value = 0;
        // 71 file test.c line 29 function main
        GOTO 4
        // 72 file test.c line 30 function main
        dead t2;
        // 73 file test.c line 30 function main
        dead t1;
        // 74 file test.c line 30 function main
     4: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__actual_thread_spawn /* c::__actual_thread_spawn */
        // 75 file <builtin-library>-pthread_create line 18 function __actual_thread_spawn
        // Labels: __CPROVER_HIDE
        SKIP
        // 76 file <builtin-library>-pthread_create line 19 function __actual_thread_spawn
        // Labels: __CPROVER_ASYNC_1
        START THREAD 1
        // 77 file <builtin-library>-pthread_create line 19 function __actual_thread_spawn
        GOTO 2
        // 78 file <builtin-library>-pthread_create line 19 function __actual_thread_spawn
     1: __CPROVER_thread_id = id;
        // 79 file <builtin-library>-pthread_create line 20 function __actual_thread_spawn
        start_routine;
        // 80 file <builtin-library>-pthread_create line 20 function __actual_thread_spawn
        thr1(arg);
        // 81 file <builtin-library>-pthread_create line 21 function __actual_thread_spawn
        FENCE(WRfence+RRfence+RWfence+WWfence+RRcumul+RWcumul+WWcumul+WRcumul);
        // 82 file <builtin-library>-pthread_create line 23 function __actual_thread_spawn
        __CPROVER_threads_exited[(signed int)id] = 1 != 0;
        // 83 file <builtin-library>-pthread_create line 19 function __actual_thread_spawn
        END THREAD
        // 84 file <builtin-library>-pthread_create line 24 function __actual_thread_spawn
     2: END_FUNCTION
