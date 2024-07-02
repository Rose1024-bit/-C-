extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }

#define N1 100000
#define N2 200000
#define N3 300000
#define N4 400000
#define N5 500000
#define N6 600000
#define N7 700000
#define N8 800000
#define N9 900000
int main ( ) {
  int a[N9];
  int i = 0;
  while ( i < N9 ) {
    a[i] = 42;
    i = i + 1;
  }
  i = 0;
  while ( i < N8 ) {
    a[i] = 43;
    i = i + 1;
  }
  i = 0;
  while ( i < N7 ) {
    a[i] = 44;
    i = i + 1;
  }
  i = 0;
  while ( i < N6 ) {
    a[i] = 45;
    i = i + 1;
  }
  i = 0;
  while ( i < N5 ) {
    a[i] = 46;
    i = i + 1;
  }
  i = 0;
  while ( i < N4 ) {
    a[i] = 47;
    i = i + 1;
  }
  i = 0;
  while ( i < N3 ) {
    a[i] = 48;
    i = i + 1;
  }
  i = 0;
  while ( i < N2 ) {
    a[i] = 49;
    i = i + 1;
  }
  i = 0;
  while ( i < N1 ) {
    a[i] = 50;
    i = i + 1;
  }

  int x;
  for ( x = 0 ; x < N9 ; x++ ) {
    __VERIFIER_assert(  a[x] == 50  );
  }
  return 0;
}
