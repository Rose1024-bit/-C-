extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#define N 100000
#define M 50000
#define L 10000


int main ( ) {
  int a[N];
  int i = 0;
  while ( i < N ) {
    a[i] = 42;
    i = i + 1;
  }
  i = 0;
  while ( i < M ) {
    a[i] = 43;
    i = i + 1;
  }
  i = 0;
  while ( i < L ) {
    a[i] = 44;
    i = i + 1;
  }

  int x;
  for ( x = 0 ; x < N ; x++ ) {
    __VERIFIER_assert(  a[x] == 44  );
  }
  return 0;
}
