#include <stdio.h>

int main(void) {

  int n;

  int id;
  unsigned long long unit,amount;
  int answer[4000];

  int i,j,flag;
  int a,aflag;


  while(1) {

    scanf("%d",&n);

    if(n==0) break;

    flag=0;
    a=0;

    for(i=0;i<n;i++) {

      scanf("%d %llu %llu",&id,&unit,&amount);
      //printf("%ld",unit*amount);
      if(unit*amount>=1000000) {

	aflag=0;

	for(j=0;j<a;j++) {

	  if(id==answer[j]) aflag=1;

	}
 
	if(aflag==0) answer[a++]=id;

	flag=1;

      }

    }

    if(flag==0) printf("NA\n");

    else {

      for(i=0;i<a;i++) printf("%d\n",answer[i]);

    }

  }

  return 0;

}
