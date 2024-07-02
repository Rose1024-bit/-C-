extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
extern int __VERIFIER_nondet_int(void);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#define N 100000

int main ( ) {
  int a[N]; int e = __VERIFIER_nondet_int();
  int i = 0;
  int j;

  for ( j = 0 ; j < N; j++ ) {
    a[j] = __VERIFIER_nondet_int();
    if(j > 200 && j < 2000 && a[j] > -1)
      a[j] = -1;
    if(j > 5000 && j < 20000 && a[j] < 10)
      a[j] = 10;
    if(j > 30000 && j < 40000 && a[j] > -20)
      a[j] = -20;
    if(j > 50000 && j < 60000 && a[j] < -20)
      a[j] = -20;
    if(j > 70000 && j < 80000 && a[j] > 0)
      a[j] = 0;
  }

  while( i < N && a[i] != e ) {
    i = i + 1;
  }

  int x;
  for ( x = 0 ; x < i ; x++ ) {
    __VERIFIER_assert(  a[x] != e  );
  }
  return 0;
}
