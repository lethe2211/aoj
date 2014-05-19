#include <stdio.h>
#include <math.h>

void move(double* x,double* y) {

  double d;
  double sin,cos;

  d=sqrt((*x)*(*x)+(*y)*(*y));

  cos=(*x)/d;
  sin=(*y)/d;

  *x-=sin;
  *y+=cos;

  return;

}

int main(void) {

  int n;
  double x,y;

  int i;


  while(1) {

    scanf("%d",&n);

    if(n==-1) break;

    x=1.0; y=0.0;

    for(i=0;i<n-1;i++) {

      move(&x,&y);

    }

    printf("%.2lf\n%.2lf\n",x,y);

  }  

  return 0;

}
