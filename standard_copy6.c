extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();

#define M 200000
#define N 100000

int main( ) {
  int a1[N];
  int a2[N];
  int a3[N];
  int a4[N];
  int a5[N];
  int a6[N];
  int a7[N];

  int a;
  for ( a = 0 ; a < M ; a++ ) {
    a1[a] = __VERIFIER_nondet_int();
    a6[a] = __VERIFIER_nondet_int();
    if(a > 200 && a < 2000 && a1[a] > 1&&a6[a] < -1){
      a1[a] = 1;
      a6[a] = -1;
    }
    if(a > 10000 && a < 20000 && a1[a] > 100 && a6[a] < -21){
      a1[a] = 100;
      a6[a] = -21;
    }
    if(a > 30000 && a < 40000 && a1[a] > 10 && a6[a] < 20){
        a1[a] = 10;
        a6[a] = 20;
    }
  }

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
    a7[i] = a5[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a7[i] = a6[i];
  }


  for ( i = N ; i < M ; i++ ) {
    a2[i] = a1[i];
  }
  for ( i = N ; i < M ; i++ ) {
    a3[i] = a2[i];
  }
  for ( i = N ; i < M ; i++ ) {
    a4[i] = a3[i];
  }
  for ( i = N ; i < M ; i++ ) {
    a5[i] = a4[i];
  }
  for ( i = N ; i < M ; i++ ) {
    a6[i] = a5[i];
  }
  for ( i = N ; i < M ; i++ ) {
    a7[i] = a6[i];
  }
  int x;
  for ( x = 0 ; x < M ; x++ ) {
    __VERIFIER_assert(  a1[x] == a7[x]  );
  }
  return 0;
}
