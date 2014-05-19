#include <stdio.h>

int main(void) {

  int n;

  int debt;
  
  int i;

  scanf("%d",&n);

  debt=100000;

  for(i=0;i<n;i++) {

    debt*=1.05;
    if(debt%1000!=0) debt+=1000-(debt%1000);
    
  }

  printf("%d\n",debt/1000*1000);

  return 0;

}
