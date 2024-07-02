extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();
#define N 100000

int main ( ) {
  int a [N];
  int b [N];
  int i = 0;
  while ( i < N ) {
    a[i] = 42;
    i = i + 1;
  }

  a[100] = 320;
  a[2000] = 123;
  for(i = 5000;i < N;i++){
    a[i] = __VERIFIER_nondet_int();
    if(i > 10000 && i < 20000 && a[i] > 42){
      a[i] = 42;
    }
    if(i > 30000 && i < 40000 && a[i] < 42){
      a[i] = 42;
    }
    if(i > 50000 && i < 60000 && a[i] != 42){
      a[i] = 42;
    }
  }
  for ( i = 0 ; i < N ; i++ ) {
    b[i] = a[i];
  }

  int x;
  for ( x = 0 ; x < N ; x++ ) {
    __VERIFIER_assert(  b[x] == 42  );
  }
  return 0;
}
