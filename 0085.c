#include <stdio.h>

int potato(int n,int m) {

  if(n==1) return 0;

  else return (potato(n-1,m)+m)%n;

}

int main(void) {

  int n,m;

  while(1) {

    scanf("%d %d",&n,&m);

    if(n==0 && m==0) break;

    printf("%d\n",potato(n,m)+1);

  }

  return 0;

}
