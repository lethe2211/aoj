#include <stdio.h>

int main(void) {

  double five,ten;


  while(scanf("%lf %lf",&five,&ten)!=EOF) {

    if(five<35.50 && ten<71.00) printf("AAA\n");

    else if(five<37.50 && ten<77.00) printf("AA\n");

    else if(five<40.00 && ten<83.00) printf("A\n");

    else if(five<43.00 && ten<89.00) printf("B\n");

    else if(five<50.00 && ten<105.00) printf("C\n");

    else if(five<55.00 && ten<116.00) printf("D\n");

    else if(five<70.00 && ten<148.00) printf("E\n");

    else printf("NA\n");

  }

  return 0;

}
