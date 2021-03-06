void fence() { asm("sync"); }
void lwfence() { asm("lwsync"); }
void isync() { asm("isync"); }

int __unbuffered_cnt=0;
int __unbuffered_p0_r1=0;
int __unbuffered_p0_r3=0;
int __unbuffered_p1_r1=0;
int __unbuffered_p1_r3=0;
int __unbuffered_p2_r1=0;
int __unbuffered_p2_r3=0;
int x=0;
int y=0;

void * P0(void * arg) {
  __unbuffered_p0_r1 = 2;
  y = __unbuffered_p0_r1;
  fence();
  __unbuffered_p0_r3 = x;
  // Instrumentation for CPROVER
  fence();
  __unbuffered_cnt++;
}

void * P1(void * arg) {
  __unbuffered_p1_r1 = 1;
  x = __unbuffered_p1_r1;
  fence();
  __unbuffered_p1_r3 = x;
  // Instrumentation for CPROVER
  fence();
  __unbuffered_cnt++;
}

void * P2(void * arg) {
  __unbuffered_p2_r1 = 2;
  x = __unbuffered_p2_r1;
  fence();
  __unbuffered_p2_r3 = 1;
  y = __unbuffered_p2_r3;
  // Instrumentation for CPROVER
  fence();
  __unbuffered_cnt++;
}

int main() {
  __CPROVER_ASYNC_0: P0(0);
  __CPROVER_ASYNC_1: P1(0);
  __CPROVER_ASYNC_2: P2(0);
  __CPROVER_assume(__unbuffered_cnt==3);
  fence();
  // EXPECT:exists
  __CPROVER_assert(!(x==2 && y==2 && __unbuffered_p0_r3==0 && __unbuffered_p1_r3==1), "Program was expected to be safe for PPC, model checker should have said NO.\nThis likely is a bug in the tool chain.");
  return 0;
}
