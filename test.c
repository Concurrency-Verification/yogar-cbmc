#include<pthread.h>
#include<assert.h>

int x = 0;
int y = 0;
int r1=0;
int r2=0;

void* thr1(void* arg){
    r1 = x;
    y = 1;
}

void thr2(void* arg){
    r2 = y;
    x = 1;
}

int main(int argc, char* argv[]){
    pthread_t t1,t2;

    pthread_create(&t1, 0, thr1, 0);
    pthread_create(&t2, 0, thr2, 0);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    assert(!(r1==0 && r2==0));
    return 0;
}
