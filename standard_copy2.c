extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();
#define M 200000
#define N 100000

int main( ) {
  int a1[M];
  int a2[M];
  int a3[M];

  int a;
  for ( a = 0 ; a < M ; a++ ) {
    a1[a] = __VERIFIER_nondet_int();
    a2[a] = __VERIFIER_nondet_int();
  }

  a1[10] = 100;
  a2[10] = 100;

  a1[100] = 10;
  a1[20000] = 23;
  a2[20000] = -1;
  int i;
  for ( i = 0 ; i < N ; i++ ) {
    a3[i] = a1[i];
  }
  for ( i = 0 ; i < N ; i++ ) {
    a3[i] = a2[i];
  }
  for ( i = N ; i < M ; i++ ) {
    a2[i] = a1[i];
  }
  for ( i = N ; i < M ; i++ ) {
    a3[i] = a2[i];
  }
  int x;
  for ( x = 0 ; x < M ; x++ ) {
    __VERIFIER_assert(  a1[x] == a3[x]  );
  }
  return 0;
}
