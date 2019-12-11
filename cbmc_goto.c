CBMC version 5.10 (cbmc-5.10-2-g2587beb) 64-bit x86_64 linux
Parsing test.c
Converting
Type-checking test
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
file <builtin-library-pthread_create> line 39 function pthread_create: replacing function pointer by 2 possible targets
Generic Property Instrumentation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

main /* main */
        // 0 file test.c line 20 function main
        pthread_t t1;
        // 1 file test.c line 20 function main
        pthread_t t2;
        // 2 file test.c line 22 function main
        pthread_create(&t1, ((const pthread_attr_t *)NULL), thr1, NULL);
        // 3 file test.c line 23 function main
        pthread_create(&t2, ((const pthread_attr_t *)NULL), (void * (*)(void *))thr2, NULL);
        // 4 file test.c line 25 function main
        pthread_join(t1, (void **)(void *)0);
        // 5 file test.c line 26 function main
        pthread_join(t2, (void **)(void *)0);
        // 6 file test.c line 28 function main
        ASSERT !(r1 == 0 && r2 == 0) // assertion !(r1==0 && r2==0)
        // 7 file test.c line 29 function main
        main#return_value = 0;
        // 8 file test.c line 29 function main
        dead t2;
        // 9 file test.c line 29 function main
        dead t1;
        // 10 file test.c line 30 function main
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

pthread_create /* pthread_create */
        // 11 file <builtin-library-pthread_create> line 18 function pthread_create
        // Labels: __CPROVER_HIDE
        unsigned long int this_thread_id;
        // 12 file <builtin-library-pthread_create> line 19 function pthread_create
        ATOMIC_BEGIN
        // 13 file <builtin-library-pthread_create> line 20 function pthread_create
        __CPROVER_next_thread_id = __CPROVER_next_thread_id + 1ul;
        // 14 file <builtin-library-pthread_create> line 20 function pthread_create
        this_thread_id = __CPROVER_next_thread_id;
        // 15 file <builtin-library-pthread_create> line 21 function pthread_create
        ATOMIC_END
        // 16 file <builtin-library-pthread_create> line 24 function pthread_create
        *thread = (pthread_t)this_thread_id;
        // 17 file <builtin-library-pthread_create> line 30 function pthread_create
        IF !(attr != ((const pthread_attr_t *)NULL)) THEN GOTO 1
        // 18 file <builtin-library-pthread_create> line 30 function pthread_create
        (void)*attr;
        // 19 file <builtin-library-pthread_create> line 32 function pthread_create
     1: START THREAD 2
        // 20 file <builtin-library-pthread_create> line 32 function pthread_create
        GOTO 6
        // 21 file <builtin-library-pthread_create> line 33 function pthread_create
     2: __CPROVER_thread_id = this_thread_id;
        // 22 file <builtin-library-pthread_create> line 39 function pthread_create
        start_routine;
        // 23 file <builtin-library-pthread_create> line 39 function pthread_create
        IF start_routine == (void * (*)(void *))thr2 THEN GOTO 3
        // 24 file <builtin-library-pthread_create> line 39 function pthread_create
        IF start_routine == thr1 THEN GOTO 4
        // 25 file <builtin-library-pthread_create> line 39 function pthread_create
     3: thr2(arg);
        // 26 file <builtin-library-pthread_create> line 39 function pthread_create
        GOTO 5
        // 27 file <builtin-library-pthread_create> line 39 function pthread_create
     4: thr1(arg);
        // 28 file <builtin-library-pthread_create> line 40 function pthread_create
     5: FENCE(WRfence+RRfence+RWfence+WWfence+RRcumul+RWcumul+WWcumul+WRcumul);
        // 29 file <builtin-library-pthread_create> line 42 function pthread_create
        __CPROVER_threads_exited[(signed int)this_thread_id] = 1 != 0;
        // 30 file <builtin-library-pthread_create> line 32 function pthread_create
        END THREAD
        // 31 file <builtin-library-pthread_create> line 44 function pthread_create
     6: pthread_create#return_value = 0;
        // 32 file <builtin-library-pthread_create> line 44 function pthread_create
        dead this_thread_id;
        // 33 file <builtin-library-pthread_create> line 45 function pthread_create
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

pthread_join /* pthread_join */
        // 34 file <builtin-library-pthread_join> line 25 function pthread_join
        // Labels: __CPROVER_HIDE
        IF !((unsigned long int)thread > __CPROVER_next_thread_id) THEN GOTO 1
        // 35 file <builtin-library-pthread_join> line 25 function pthread_join
        pthread_join#return_value = 3;
        // 36 file <builtin-library-pthread_join> line 25 function pthread_join
        GOTO 4
        // 37 file <builtin-library-pthread_join> line 26 function pthread_join
     1: IF !((unsigned long int)thread == __CPROVER_thread_id) THEN GOTO 2
        // 38 file <builtin-library-pthread_join> line 26 function pthread_join
        pthread_join#return_value = 35;
        // 39 file <builtin-library-pthread_join> line 26 function pthread_join
        GOTO 4
        // 40 file <builtin-library-pthread_join> line 27 function pthread_join
     2: IF !(value_ptr != ((void **)NULL)) THEN GOTO 3
        // 41 file <builtin-library-pthread_join> line 27 function pthread_join
        (void)*(*((char **)value_ptr));
        // 42 file <builtin-library-pthread_join> line 28 function pthread_join
     3: ASSUME __CPROVER_threads_exited[(signed int)(unsigned long int)thread]
        // 43 file <builtin-library-pthread_join> line 30 function pthread_join
        pthread_join#return_value = 0;
        // 44 file <builtin-library-pthread_join> line 31 function pthread_join
     4: END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__CPROVER_initialize /* __CPROVER_initialize */
        // 45 file <built-in-additions> line 11
        // Labels: __CPROVER_HIDE
        __CPROVER_dead_object = NULL;
        // 46 file <built-in-additions> line 10
        __CPROVER_deallocated = NULL;
        // 47 file <built-in-additions> line 14
        __CPROVER_malloc_is_new_array = 0 != 0;
        // 48 file <built-in-additions> line 12
        __CPROVER_malloc_object = NULL;
        // 49 file <built-in-additions> line 13
        __CPROVER_malloc_size = 0u;
        // 50 file <built-in-additions> line 15
        __CPROVER_memory_leak = NULL;
        // 51 file <built-in-additions> line 8
        __CPROVER_next_thread_id = (unsigned long int)0;
        // 52 file <built-in-additions> line 29
        __CPROVER_pipe_count = (unsigned int)0;
        // 53 file <built-in-additions> line 20
        __CPROVER_rounding_mode = 0;
        // 54 file <built-in-additions> line 6
        __CPROVER_thread_id = (unsigned long int)0;
        // 55 file <built-in-additions> line 7
        __CPROVER_threads_exited = ARRAY_OF(FALSE);
        // 56 file test.c line 6
        r1 = 0;
        // 57 file test.c line 7
        r2 = 0;
        // 58 file test.c line 4
        x = 0;
        // 59 file test.c line 5
        y = 0;
        // 60 no location
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

thr1 /* thr1 */
        // 61 file test.c line 10 function thr1
        r1 = x;
        // 62 file test.c line 11 function thr1
        y = 1;
        // 63 file test.c line 12 function thr1
        thr1#return_value = NONDET(void *);
        // 64 file test.c line 12 function thr1
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

thr2 /* thr2 */
        // 65 file test.c line 15 function thr2
        r2 = y;
        // 66 file test.c line 16 function thr2
        x = 1;
        // 67 file test.c line 17 function thr2
        END_FUNCTION
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

__CPROVER__start /* __CPROVER__start */
        // 68 no location
        __CPROVER_initialize();
        // 69 no location
        ASSUME argc' >= 1
        // 70 no location
        ASSUME argc' <= 268435456
        // 71 no location
        INPUT("argc", argc');
        // 72 no location
        argv'[argc'] = ((char *)NULL);
        // 73 file test.c line 19
        main(argc', argv');
        // 74 file test.c line 19
        return' = main#return_value;
        // 75 file test.c line 19
        dead main#return_value;
        // 76 file test.c line 19
        OUTPUT("return", return');
        // 77 no location
        END_FUNCTION

