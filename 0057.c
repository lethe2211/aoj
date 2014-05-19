#include <stdio.h>

int main(void) {

  int n;
  int area;
  int i;

  while(scanf("%d",&n)!=EOF) {

    area=1;

    for(i=1;i<=n;i++) {
      area+=i;
    }

    printf("%d\n",area);

  }

  return 0;

}
