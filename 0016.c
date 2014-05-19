#include <stdio.h>
#include <math.h>

int main(void) {

  int d,t;
  double x=0.0,y=0.0;
  int ang=90.0;

  while(1) {

    scanf("%d,%d",&d,&t);

    if(d==0 && t==0) break;
    
    x+=(double)d*cos((double)ang*M_PI/180.0);
    y+=(double)d*sin((double)ang*M_PI/180.0);

    ang-=(double)t;
  }

  printf("%d\n%d\n",(int)x,(int)y);

  return 0;
}

