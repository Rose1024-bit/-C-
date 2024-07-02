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

  int a;
  for ( a = 0 ; a < N ; a++ ) {
    a1[a] = __VERIFIER_nondet_int();
    a2[a] = __VERIFIER_nondet_int();
    if(a > 200 && a < 2000 && a1[a] > 1&&a2[a] < -1){
      a1[a] = 1;
      a2[a] = -1;
    }
    if(a > 10000 && a < 20000 && a1[a] > 100 && a2[a] < -21){
      a1[a] = 100;
      a2[a] = -21;
    }
    if(a > 30000 && a < 40000 && a1[a] > 10 && a2[a] < 20){
        a1[a] = 10;
        a2[a] = 20;
    }
    if(a > 50000 && a < 60000 && a1[a] > 0 && a2[a] < 0){
        a1[a] = 0;
        a2[a] = 0;
    }
    if(a > 70000 && a < 80000 && a1[a] < 0 && a2[a] > 0){
        a1[a] = 0;
        a2[a] = 0;
    }
  }

  int i;
  for ( i = 0 ; i < N ; i++ ) {
    a3[i] = a1[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a3[i] = a2[i];
  }

  int x;
  for ( x = 0 ; x < N ; x++ ) {
    __VERIFIER_assert(  a1[x] == a3[x]  );
  }
  return 0;
}
