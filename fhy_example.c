#include <pthread.h>
#include <assert.h>

int x = 0;
int y = 0;

void* thr1 (void * arg) {
    if(nondet())
    {
        x = y +1;
    }
    else
    {
        x = y + 2;
    }
}

void* thr2 (void* arg) {
    if(nondet())
    {
        y = x +1;
    }
    else
    {
        y = x + 2;
    }
}

void main() {
    pthread_t t1, t2;
    pthread_create(&t1, 0, thr1, 0);
    pthread_create(&t2, 0, thr2, 0);
    pthread_join(t1, 0);
    pthread_join(t2, 0);
    assert( ! (x == 3 && y == 3) );
}