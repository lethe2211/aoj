#include <stdio.h>

int main(void) {

  double h[100];
  double h_max,h_min;
  int n=0;
  int i;

  while(scanf("%lf",&h[n])!=EOF) {
    n++;
  }

  h_max=h[0];
  h_min=h[0];
  
  for(i=0;i<n-1;i++) {
    if(h_max<h[i+1]) h_max=h[i+1];
    if(h_min>h[i+1]) h_min=h[i+1];
  }

  printf("%.1lf",h_max-h_min);

  return 0;
}

