extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#define N 100000

int main ( ) {
  int a [N];
  int i = 0;
  while ( i < N ) {
    a[i] = 42;
    i = i + 1;
  }
  i = 0;
  while ( i < N ) {
    a[i] = 43;
    i = i + 1;
  }
  i = 0;
  while ( i < N ) {
    a[i] = 44;
    i = i + 1;
  }
  i = 0;
  while ( i < N ) {
    a[i] = __VERIFIER_nondet_int();
    if(i > 200 && i < 1000 && a[i] < -42)
      a[i] = -42;
    if(i > 2000 && i < 10000 && a[i] < -21)
      a[i] = -21;
    if(i > 20000 && i < 30000 && a[i] > -21)
      a[i] = -21;
    if(i > 40000 && i < 50000 && a[i] < 0)
      a[i] = 0;
    if(i > 60000 && i < 70000 && a[i] > 0)
      a[i] = 0;
    i = i + 1;
  }

  int x;
  for ( x = 0 ; x < N ; x++ ) {
    __VERIFIER_assert(  a[x] == 46  );
  }
  return 0;
}
