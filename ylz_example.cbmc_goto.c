CBMC version 5.10 (cbmc-5.10-3-ga218aeb-dirty) 64-bit x86_64 linux
Parsing ../yogar-cbmc/ylz_example.c
Converting
Type-checking ylz_example
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
file <builtin-library-pthread_create> line 39 function pthread_create: replacing function pointer by 2 possible targets
Generic Property Instrumentation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__CPROVER__start /* __CPROVER__start */
        // 70 no location
        // Labels: __CPROVER_HIDE
        __CPROVER_initialize();
        // 71 file ../yogar-cbmc/ylz_example.c line 17
        main();
        // 72 no location
        END_FUNCTION

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__CPROVER_initialize /* __CPROVER_initialize */
        // 44 file <built-in-additions> line 11
        // Labels: __CPROVER_HIDE
        __CPROVER_dead_object = NULL;
        // 45 file <built-in-additions> line 10
        __CPROVER_deallocated = NULL;
        // 46 file <built-in-additions> line 14
        __CPROVER_malloc_is_new_array = 0 != 0;
        // 47 file <built-in-additions> line 12
        __CPROVER_malloc_object = NULL;
        // 48 file <built-in-additions> line 13
        __CPROVER_malloc_size = 0u;
        // 49 file <built-in-additions> line 15
        __CPROVER_memory_leak = NULL;
        // 50 file <built-in-additions> line 8
        __CPROVER_next_thread_id = (unsigned long int)0;
        // 51 file <built-in-additions> line 29
        __CPROVER_pipe_count = (unsigned int)0;
        // 52 file <built-in-additions> line 20
        __CPROVER_rounding_mode = 0;
        // 53 file <built-in-additions> line 6
        __CPROVER_thread_id = (unsigned long int)0;
        // 54 file <built-in-additions> line 7
        __CPROVER_threads_exited = ARRAY_OF(FALSE);
        // 55 file ../yogar-cbmc/ylz_example.c line 4
        m = 0;
        // 56 file ../yogar-cbmc/ylz_example.c line 4
        n = 0;
        // 57 file ../yogar-cbmc/ylz_example.c line 4
        x = 1;
        // 58 file ../yogar-cbmc/ylz_example.c line 4
        y = 1;
        // 59 no location
        END_FUNCTION

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

main /* main */
        // 0 file ../yogar-cbmc/ylz_example.c line 18 function main
        pthread_t t1;
        // 1 file ../yogar-cbmc/ylz_example.c line 18 function main
        pthread_t t2;
        // 2 file ../yogar-cbmc/ylz_example.c line 19 function main
        pthread_create(&t1, ((const pthread_attr_t *)NULL), thr1, NULL);
        // 3 file ../yogar-cbmc/ylz_example.c line 20 function main
        pthread_create(&t2, ((const pthread_attr_t *)NULL), thr2, NULL);
        // 4 file ../yogar-cbmc/ylz_example.c line 21 function main
        pthread_join(t1, ((void **)NULL));
        // 5 file ../yogar-cbmc/ylz_example.c line 22 function main
        pthread_join(t2, ((void **)NULL));
        // 6 file ../yogar-cbmc/ylz_example.c line 23 function main
        ASSERT !(m == 1 && n == 1) // assertion ! (m == 1 && n == 1)
        // 7 file ../yogar-cbmc/ylz_example.c line 24 function main
        dead t2;
        // 8 file ../yogar-cbmc/ylz_example.c line 24 function main
        dead t1;
        // 9 file ../yogar-cbmc/ylz_example.c line 24 function main
        END_FUNCTION

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

pthread_create /* pthread_create */
        // 10 file <builtin-library-pthread_create> line 18 function pthread_create
        // Labels: __CPROVER_HIDE
        unsigned long int this_thread_id;
        // 11 file <builtin-library-pthread_create> line 19 function pthread_create
        ATOMIC_BEGIN
        // 12 file <builtin-library-pthread_create> line 20 function pthread_create
        __CPROVER_next_thread_id = __CPROVER_next_thread_id + 1ul;
        // 13 file <builtin-library-pthread_create> line 20 function pthread_create
        this_thread_id = __CPROVER_next_thread_id;
        // 14 file <builtin-library-pthread_create> line 21 function pthread_create
        ATOMIC_END
        // 15 file <builtin-library-pthread_create> line 24 function pthread_create
        *thread = (pthread_t)this_thread_id;
        // 16 file <builtin-library-pthread_create> line 30 function pthread_create
        IF !(attr != ((const pthread_attr_t *)NULL)) THEN GOTO 1
        // 17 file <builtin-library-pthread_create> line 30 function pthread_create
        (void)*attr;
        // 18 file <builtin-library-pthread_create> line 32 function pthread_create
     1: START THREAD 2
        // 19 file <builtin-library-pthread_create> line 32 function pthread_create
        GOTO 6
        // 20 file <builtin-library-pthread_create> line 33 function pthread_create
     2: __CPROVER_thread_id = this_thread_id;
        // 21 file <builtin-library-pthread_create> line 39 function pthread_create
        start_routine;
        // 22 file <builtin-library-pthread_create> line 39 function pthread_create
        IF start_routine == thr2 THEN GOTO 3
        // 23 file <builtin-library-pthread_create> line 39 function pthread_create
        IF start_routine == thr1 THEN GOTO 4
        // 24 file <builtin-library-pthread_create> line 39 function pthread_create
     3: thr2(arg);
        // 25 file <builtin-library-pthread_create> line 39 function pthread_create
        GOTO 5
        // 26 file <builtin-library-pthread_create> line 39 function pthread_create
     4: thr1(arg);
        // 27 file <builtin-library-pthread_create> line 40 function pthread_create
     5: FENCE(WRfence+RRfence+RWfence+WWfence+RRcumul+RWcumul+WWcumul+WRcumul);
        // 28 file <builtin-library-pthread_create> line 42 function pthread_create
        __CPROVER_threads_exited[(signed int)this_thread_id] = 1 != 0;
        // 29 file <builtin-library-pthread_create> line 32 function pthread_create
        END THREAD
        // 30 file <builtin-library-pthread_create> line 44 function pthread_create
     6: pthread_create#return_value = 0;
        // 31 file <builtin-library-pthread_create> line 44 function pthread_create
        dead this_thread_id;
        // 32 file <builtin-library-pthread_create> line 45 function pthread_create
        END_FUNCTION

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

pthread_join /* pthread_join */
        // 33 file <builtin-library-pthread_join> line 26 function pthread_join
        // Labels: __CPROVER_HIDE
        IF !((unsigned long int)thread > __CPROVER_next_thread_id) THEN GOTO 1
        // 34 file <builtin-library-pthread_join> line 26 function pthread_join
        pthread_join#return_value = 3;
        // 35 file <builtin-library-pthread_join> line 26 function pthread_join
        GOTO 4
        // 36 file <builtin-library-pthread_join> line 27 function pthread_join
     1: IF !((unsigned long int)thread == __CPROVER_thread_id) THEN GOTO 2
        // 37 file <builtin-library-pthread_join> line 27 function pthread_join
        pthread_join#return_value = 35;
        // 38 file <builtin-library-pthread_join> line 27 function pthread_join
        GOTO 4
        // 39 file <builtin-library-pthread_join> line 28 function pthread_join
     2: IF !(value_ptr != ((void **)NULL)) THEN GOTO 3
        // 40 file <builtin-library-pthread_join> line 28 function pthread_join
        (void)*(*((char **)value_ptr));
        // 41 file <builtin-library-pthread_join> line 29 function pthread_join
     3: ASSUME __CPROVER_threads_exited[(signed int)(unsigned long int)thread]
        // 42 file <builtin-library-pthread_join> line 31 function pthread_join
        pthread_join#return_value = 0;
        // 43 file <builtin-library-pthread_join> line 32 function pthread_join
     4: END_FUNCTION

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

thr1 /* thr1 */
        // 60 file ../yogar-cbmc/ylz_example.c line 6 function thr1
        x = y + 1;
        // 61 file ../yogar-cbmc/ylz_example.c line 7 function thr1
        m = y;
        // 62 file ../yogar-cbmc/ylz_example.c line 8 function thr1
        x = 0;
        // 63 file ../yogar-cbmc/ylz_example.c line 9 function thr1
        thr1#return_value = NONDET(void *);
        // 64 file ../yogar-cbmc/ylz_example.c line 9 function thr1
        END_FUNCTION

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

thr2 /* thr2 */
        // 65 file ../yogar-cbmc/ylz_example.c line 12 function thr2
        y = x + 1;
        // 66 file ../yogar-cbmc/ylz_example.c line 13 function thr2
        n = x;
        // 67 file ../yogar-cbmc/ylz_example.c line 14 function thr2
        y = 0;
        // 68 file ../yogar-cbmc/ylz_example.c line 15 function thr2
        thr2#return_value = NONDET(void *);
        // 69 file ../yogar-cbmc/ylz_example.c line 15 function thr2
        END_FUNCTION

