extern void abort(void);
#include <assert.h>
void reach_error() { assert(0); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int();

#define N 200000
#define M 100000

int main( ) {
  int a1[N];
  int a2[N];

  int a;
  for ( a = 0 ; a < N ; a++ ) {
      a1[a] = __VERIFIER_nondet_int();
      if(a < M){
        a2[a] = __VERIFIER_nondet_int();  
        if(a >200 && a < 2000 && a1[a] > -1 && a2[a] < 1){
            a1[a] = -1;  
            a2[a] = 1;
         }
      }
      if(a >100200 && a < 102000 && a1[a] > 0)
        a1[a] = 0;
      if(a > 108000 && a < 110000 && a1[a] > 10)
          a1[a] = 10;
  }
  int i;
  for ( i = 0 ; i < N ; i++ ) {
    if(a<M){
      a1[i] = a1[i];
    }
    if(a>=M){
      a2[i] = a1[i];
    }
  }

  int x;
  for ( x = 0 ; x < N ; x++ ) {
    __VERIFIER_assert(  a1[x] == a2[x]  );
  }
  return 0;
}
