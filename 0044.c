#include <stdio.h>

int main(void) {

  int n;
  int np,nm;
  int i,flag;

  while(scanf("%d",&n)!=EOF) {

    np=n+1;
    nm=n-1;
    
    while(1) {

      flag=1;
     
      for(i=2;i<np;i++) {
	if(np%i==0) {
	  flag=0;
	  break;
	}
      }
     
      if(flag==1) break;

      np++;
    }	
    
    while(1) {

      flag=1;
      
      for(i=2;i<nm;i++) {
	if(nm%i==0) {
	  flag=0;
	  break;
	}
      }

      if(flag==1) break;

      nm--;
    }

    printf("%d %d\n",nm,np);

  }
   
  return 0;

}

