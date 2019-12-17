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
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

main /* main */
        // 0 no location
        __CPROVER_initialize();
        // 1 file ./ylz_example.c line 17
        main();
        // 2 no location
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__CPROVER_initialize /* c::__CPROVER_initialize */
        // 3 file <built-in-additions> line 30
        __CPROVER_deallocated = NULL;
        // 4 file <built-in-additions> line 31
        __CPROVER_dead_object = NULL;
        // 5 file <built-in-additions> line 32
        __CPROVER_malloc_object = NULL;
        // 6 file <built-in-additions> line 33
        __CPROVER_malloc_size = 0u;
        // 7 file <built-in-additions> line 34
        __CPROVER_malloc_is_new_array = 0 != 0;
        // 8 file <built-in-additions> line 35
        __CPROVER_memory_leak = NULL;
        // 9 file <built-in-additions> line 57
        __CPROVER_rounding_mode = 0;
        // 10 file <built-in-additions> line 78
        __CPROVER_pipe_count = (unsigned int)0;
        // 11 file <built-in-additions> line 21
        __CPROVER_thread_id = (unsigned long int)0;
        // 12 file <built-in-additions> line 22
        __CPROVER_threads_exited = ARRAY_OF(FALSE);
        // 13 file <built-in-additions> line 23
        __CPROVER_next_thread_id = (unsigned long int)0;
        // 14 file ./ylz_example.c line 4
        x = 1;
        // 15 file ./ylz_example.c line 4
        y = 1;
        // 16 file ./ylz_example.c line 4
        m = 0;
        // 17 file ./ylz_example.c line 4
        n = 0;
        // 18 no location
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

pthread_create /* c::pthread_create */
        // 19 file <builtin-library>-pthread_create line 32 function pthread_create
        // Labels: __CPROVER_HIDE
        SKIP
        // 20 file <builtin-library>-pthread_create line 33 function pthread_create
        unsigned long int this_thread_id;
        // 21 file <builtin-library>-pthread_create line 34 function pthread_create
        ATOMIC_BEGIN
        // 22 file <builtin-library>-pthread_create line 35 function pthread_create
        __CPROVER_next_thread_id = __CPROVER_next_thread_id + 1ul;
        // 23 file <builtin-library>-pthread_create line 35 function pthread_create
        this_thread_id = __CPROVER_next_thread_id;
        // 24 file <builtin-library>-pthread_create line 36 function pthread_create
        ATOMIC_END
        // 25 file <builtin-library>-pthread_create line 38 function pthread_create
        IF !(thread != ((unsigned long int *)NULL)) THEN GOTO 1
        // 26 file <builtin-library>-pthread_create line 44 function pthread_create
        *thread = this_thread_id;
        // 27 file <builtin-library>-pthread_create line 48 function pthread_create
     1: IF !(attr != ((const union pthread_attr_t *)NULL)) THEN GOTO 2
        // 28 file <builtin-library>-pthread_create line 48 function pthread_create
        (void)*attr;
        // 29 file <builtin-library>-pthread_create line 49 function pthread_create
     2: __actual_thread_spawn(start_routine, arg, this_thread_id);
        // 30 file <builtin-library>-pthread_create line 51 function pthread_create
        pthread_create#return_value = 0;
        // 31 file <builtin-library>-pthread_create line 51 function pthread_create
        GOTO 3
        // 32 file <builtin-library>-pthread_create line 52 function pthread_create
        dead this_thread_id;
        // 33 file <builtin-library>-pthread_create line 52 function pthread_create
     3: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

pthread_join /* c::pthread_join */
        // 34 file <builtin-library>-pthread_join line 18 function pthread_join
        // Labels: __CPROVER_HIDE
        SKIP
        // 35 file <builtin-library>-pthread_join line 19 function pthread_join
        IF !((unsigned long int)thread > __CPROVER_next_thread_id) THEN GOTO 1
        // 36 file <builtin-library>-pthread_join line 19 function pthread_join
        pthread_join#return_value = 3;
        // 37 file <builtin-library>-pthread_join line 19 function pthread_join
        GOTO 4
        // 38 file <builtin-library>-pthread_join line 20 function pthread_join
     1: IF !((unsigned long int)thread == __CPROVER_thread_id) THEN GOTO 2
        // 39 file <builtin-library>-pthread_join line 20 function pthread_join
        pthread_join#return_value = 35;
        // 40 file <builtin-library>-pthread_join line 20 function pthread_join
        GOTO 4
        // 41 file <builtin-library>-pthread_join line 21 function pthread_join
     2: IF !(value_ptr != ((void **)NULL)) THEN GOTO 3
        // 42 file <builtin-library>-pthread_join line 21 function pthread_join
        (void)*(*((char **)value_ptr));
        // 43 file <builtin-library>-pthread_join line 22 function pthread_join
     3: ASSUME __CPROVER_threads_exited[(signed int)(unsigned long int)thread]
        // 44 file <builtin-library>-pthread_join line 23 function pthread_join
        pthread_join#return_value = 0;
        // 45 file <builtin-library>-pthread_join line 23 function pthread_join
        GOTO 4
        // 46 file <builtin-library>-pthread_join line 24 function pthread_join
     4: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

thr1 /* c::thr1 */
        // 47 file ./ylz_example.c line 6 function thr1
        x = y + 1;
        // 48 file ./ylz_example.c line 7 function thr1
        m = y;
        // 49 file ./ylz_example.c line 8 function thr1
        x = 0;
        // 50 file ./ylz_example.c line 9 function thr1
        thr1#return_value = NONDET(void *);
        // 51 file ./ylz_example.c line 9 function thr1
        GOTO 1
        // 52 file ./ylz_example.c line 9 function thr1
     1: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

thr2 /* c::thr2 */
        // 53 file ./ylz_example.c line 12 function thr2
        y = x + 1;
        // 54 file ./ylz_example.c line 13 function thr2
        n = x;
        // 55 file ./ylz_example.c line 14 function thr2
        y = 0;
        // 56 file ./ylz_example.c line 15 function thr2
        thr2#return_value = NONDET(void *);
        // 57 file ./ylz_example.c line 15 function thr2
        GOTO 1
        // 58 file ./ylz_example.c line 15 function thr2
     1: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

main /* c::main */
        // 59 file ./ylz_example.c line 18 function main
        unsigned long int t1;
        // 60 file ./ylz_example.c line 18 function main
        unsigned long int t2;
        // 61 file ./ylz_example.c line 19 function main
        pthread_create(&t1, ((const union pthread_attr_t *)NULL), thr1, NULL);
        // 62 file ./ylz_example.c line 20 function main
        pthread_create(&t2, ((const union pthread_attr_t *)NULL), thr2, NULL);
        // 63 file ./ylz_example.c line 21 function main
        pthread_join(t1, ((void **)NULL));
        // 64 file ./ylz_example.c line 22 function main
        pthread_join(t2, ((void **)NULL));
        // 65 file ./ylz_example.c line 23 function main
        IF !(m == 1) THEN GOTO 1
        // 66 file ./ylz_example.c line 23 function main
        IF !(n == 1) THEN GOTO 1
        // 67 file ./ylz_example.c line 23 function main
        GOTO 2
        // 68 file ./ylz_example.c line 23 function main
     1: (void)0;
        // 69 file ./ylz_example.c line 23 function main
        GOTO 3
        // 70 file ./ylz_example.c line 23 function main
     2: ASSERT FALSE // assertion ! (m == 1 && n == 1)
        // 71 file ./ylz_example.c line 24 function main
     3: dead t2;
        // 72 file ./ylz_example.c line 24 function main
        dead t1;
        // 73 file ./ylz_example.c line 24 function main
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__actual_thread_spawn /* c::__actual_thread_spawn */
        // 74 file <builtin-library>-pthread_create line 18 function __actual_thread_spawn
        // Labels: __CPROVER_HIDE
        SKIP
        // 75 file <builtin-library>-pthread_create line 19 function __actual_thread_spawn
        // Labels: __CPROVER_ASYNC_1
        START THREAD 1
        // 76 file <builtin-library>-pthread_create line 19 function __actual_thread_spawn
        GOTO 5
        // 77 file <builtin-library>-pthread_create line 19 function __actual_thread_spawn
     1: __CPROVER_thread_id = id;
        // 78 file <builtin-library>-pthread_create line 20 function __actual_thread_spawn
        start_routine;
        // 79 file <builtin-library>-pthread_create line 20 function __actual_thread_spawn
        IF start_routine == thr1 THEN GOTO 2
        // 80 file <builtin-library>-pthread_create line 20 function __actual_thread_spawn
        IF start_routine == thr2 THEN GOTO 3
        // 81 file <builtin-library>-pthread_create line 20 function __actual_thread_spawn
     2: thr1(arg);
        // 82 file <builtin-library>-pthread_create line 20 function __actual_thread_spawn
        GOTO 4
        // 83 file <builtin-library>-pthread_create line 20 function __actual_thread_spawn
     3: thr2(arg);
        // 84 file <builtin-library>-pthread_create line 21 function __actual_thread_spawn
     4: FENCE(WRfence+RRfence+RWfence+WWfence+RRcumul+RWcumul+WWcumul+WRcumul);
        // 85 file <builtin-library>-pthread_create line 23 function __actual_thread_spawn
        __CPROVER_threads_exited[(signed int)id] = 1 != 0;
        // 86 file <builtin-library>-pthread_create line 19 function __actual_thread_spawn
        END THREAD
        // 87 file <builtin-library>-pthread_create line 24 function __actual_thread_spawn
     5: END_FUNCTION
