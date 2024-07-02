extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();

#define N 100000

int main( ) {
  int a1[N];
  int a2[N];
  int a3[N];
  int a4[N];
  int a5[N];
  int a6[N];
  int a7[N];
  int a8[N];
  int a9[N];
  int a0[N];

  int a;
  for ( a = 0 ; a < N ; a++ ) {
      a1[a] = __VERIFIER_nondet_int();
      if(a > 200 && a < 2000 && a1[a] > 0)
        a1[a] = 0;
      if(a > 800 && a < 10000 && a1[a] > 10)
          a1[a] = 10;
      if(a > 20000 && a < 30000 && a1[a] < 20)
        a1[a] = 20;
      if(a > 50000 && a < 60000 && a1[a] > -2)
        a1[a] = -2;
      if(a > 70000 && a < 80000 && a1[a] < 23)
        a1[a] = 23;
  }
  a1[10] = -21;

  int i;
  for ( i = 0 ; i < N ; i++ ) {
    a2[i] = a1[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a3[i] = a2[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a4[i] = a3[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a5[i] = a4[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a6[i] = a5[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a7[i] = a6[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a8[i] = a7[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a9[i] = a8[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a0[i] = a9[i];
  }

  int x;
  for ( x = 0 ; x < N ; x++ ) {
    __VERIFIER_assert(  a1[x] == a0[x]  );
  }
  return 0;
}
