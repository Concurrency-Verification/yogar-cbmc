extern void __VERIFIER_error(void) __attribute__ ((__noreturn__));
extern void __VERIFIER_assume(int);

extern unsigned int __VERIFIER_nondet_uint();
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}

#include <pthread.h>
unsigned a, b;
void* dec_a(void* arg)
{
  (void)arg;
  if(a>b)
    a=a-b;
  return 0;
}

void* dec_b(void* arg)
{
  (void)arg;
  if(b>a)
    b=b-a;
  return 0;
}

unsigned start(unsigned a_in, unsigned b_in)
{
  a=a_in;
  b=b_in;
  pthread_t t1, t2;
  pthread_create(&t1, 0, dec_a, 0);
  pthread_create(&t2, 0, dec_b, 0);
  pthread_join(t1, 0);
  pthread_join(t2, 0);
  return a;
}

void check_gcd(unsigned a_in, unsigned b_in, unsigned gcd){
  __VERIFIER_assert((a_in !=gcd &&  b_in != gcd));
}

int main()
{
  // for testing with small unwinding bounds
  // unsigned a_in=__VERIFIER_nondet_uint(); //=8;
  // unsigned b_in=__VERIFIER_nondet_uint(); //=6;
  unsigned a_in = 8;
  unsigned b_in = 6;

  __VERIFIER_assume(a_in > 0);
  __VERIFIER_assume(b_in > 0);
  check_gcd(a_in, b_in, start(a_in, b_in));
  return 0;
}
