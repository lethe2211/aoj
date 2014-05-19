#include <stdio.h>

int main(void) {

  int n;

  int is_prime[110001];
  int prime[10001];
  int s;

  int i,j;
  int p=0;

  is_prime[0]=0;is_prime[1]=0;

  for(i=2;i<=110000;i++) is_prime[i]=1;

  for(i=2;i<=110000;i++) {

    if(is_prime[i]==1) {

      prime[p]=i;

      p++;

      for(j=2*i;j<=110000;j+=i) is_prime[j]=0;

    }

  }

  //for(j=0;j<10000;j++) printf("%d ",prime[j]);

  while(1) {

    scanf("%d",&n);

    if(n==0) break;

    s=0;

    for(i=0;i<n;i++) s+=prime[i];

    printf("%d\n",s);

  }

  return 0;

}
  
  
