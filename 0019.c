#include <stdio.h>

int main(void) {

  int n;
  long long result=1;
  int i;

  scanf("%d",&n);

  for(i=1;i<=n;i++) {
    result*=i;
  }

  printf("%lld\n",result);

  return 0;
}
