#include <stdio.h>

int main(void) {

  double xa,ya,xb,yb,xc,yc,xd,yd;

  while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&xa,&ya,&xb,&yb,&xc,&yc,&xd,&yd)!=EOF) {
  
    if(xb-xa==0.0) {
      if(yd-yc==0.0 && xd-xc!=0.0) printf("YES\n");
      else printf("NO\n");
    }
    else if(xd-xc==0.0) {
      if(yb-ya==0.0 && xb-xa!=0.0) printf("YES\n");
      else printf("NO\n");
    }

    else if((yb-ya)*(yd-yc)/((xb-xa)*(xd-xc))==-1.0) printf("YES\n");

    else printf("NO\n");
  }

  return 0;

}

