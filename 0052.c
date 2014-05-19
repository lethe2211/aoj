#include <stdio.h>

int main(void) {

  long n;
  long divisor,multiple;

  while(1) {
    
    scanf("%ld",&n);

    if(n==0) return 0;

    divisor=5;
    multiple=0;

    while(divisor<=n) {
      
      multiple+=n/divisor;
      divisor=divisor*5;

    }

    printf("%ld\n",multiple);
  }

  return 0;

}


