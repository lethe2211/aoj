#include <stdio.h>

int main(void) {

  int n;

  int quo;
  int digit[20];

  int i,num;

  while(1) {

    scanf("%d",&n);

    if(n==-1) break;

    quo=n;
    num=0;

    if(quo==0) {
      
      printf("0\n");
      continue;

    }

    while(quo>0) {

      digit[num]=quo%4;
      quo/=4;

      num++;

    }
    
    for(i=num-1;i>=0;i--) printf("%d",digit[i]);

    puts("");

  }

  return 0;

}
