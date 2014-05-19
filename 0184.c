#include <stdio.h>

int main(void) {

  int n;
  int age;

  int gen[10];

  int i;


  while(1) {

    scanf("%d",&n);

    if(n==0) break;

    for(i=0;i<7;i++) gen[i]=0;

    for(i=0;i<n;i++) {

      scanf("%d",&age);

      if(age<10) gen[0]++;

      else if(age<20) gen[1]++;

      else if(age<30) gen[2]++;
      
      else if(age<40) gen[3]++;

      else if(age<50) gen[4]++;

      else if(age<60) gen[5]++;

      else gen[6]++;

    }

    for(i=0;i<7;i++) printf("%d\n",gen[i]);

  }

  return 0;

}
