#include <stdio.h>

int main(void) {

  double x1,y1,x2,y2,xq,yq;

  double x,y;

  double angle1;

  while(scanf("%lf,%lf,%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2,&xq,&yq)!=EOF) {

    if(x1==x2) {

      x=2*x1-xq;
      y=yq;

    }

    else if(y1==y2) {

      x=xq;
      y=2*y1-yq;

    }

    else {

      angle1=(y2-y1)/(x2-x1);
      x=(2.0*yq-2.0*y1+2.0*angle1*x1+(1.0/angle1-angle1)*xq)/(angle1+1.0/angle1);
      y=angle1*(xq+x-2*x1)+2*y1-yq;

    }

    printf("%lf %lf\n",x,y);

  }

  return 0;

}


  
