extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "array-2.c", 3, "reach_error"); }

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}
int __VERIFIER_nondet_int();
#define SIZE 100000
int main()
{
  //unsigned int SIZE=1;
  unsigned int j,k;
  int array[SIZE], menor;

  menor = __VERIFIER_nondet_int();

  for(j=0;j<SIZE;j++) {
       array[j] = __VERIFIER_nondet_int();
       if(j > 200 && j < 2000 && array[j] > 0){
         array[j] = 0;
       }
       if(j > 4000 && j < 6000 && array[j] < -1){
         array[j] = -1;
       }
       if(array[j]<=menor)
          menor = array[j];
    }
    for(j = 0;j <SIZE;j++)
    __VERIFIER_assert(array[j]>menor);

    return 0;
}
