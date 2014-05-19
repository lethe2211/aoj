#include <stdio.h>

int main(void) {
  
  int n;
  int a,b,c,d;

  int i,j,k,l;
  int count;

  
  while(scanf("%d",&n)!=EOF) {

    count=0;

    for(i=0;i<10;i++) {

      for(j=0;j<10;j++) {

	for(k=0;k<10;k++) {

	  for(l=0;l<10;l++) {

	    if(i+j+k+l==n) count++;

	  }

	}

      }

    }

    printf("%d\n",count);
  
  }

  return 0;

}
