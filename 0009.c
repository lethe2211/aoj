#include <stdio.h>
#include <math.h>
#define MAX 999999

int main(void) {

  int flag[MAX+1];
  int n,count;

  int i,j;

  for(i=0;i<=MAX;i++) {
    flag[i]= (i<=1)? 0: 1;
  }

  for(i=2;i<=(int)sqrt(MAX)+1;i++) {
    if(flag[i]==1) {
      for(j=i*2;j<=MAX;j+=i) flag[j]=0;
    }
  }

  while(scanf("%d",&n)!=EOF) {

    count=0;

    for(i=2;i<=n;i++) {

      if(flag[i]==1) count++;
    }

    printf("%d\n",count);

  }

  return 0;

}
