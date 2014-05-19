#include <stdio.h>

int main() {
  
  int a,b,c,d,e,f;
  double x,y;

  while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF) {
    x=(c*e-b*f)/(a*e-b*d);
    y=(a*f-c*d)/(a*e-b*d);
    printf("%f3 %f3",x,y);
  }
  
  return 0;
}



