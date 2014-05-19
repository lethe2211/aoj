#include <stdio.h>

int main(void) {

  int id;
  double weight,height;

  while(scanf("%d,%lf,%lf",&id,&weight,&height)!=EOF) {
    
    if(weight/(height*height) >= 25) printf("%d\n",id);
 
  }

  return 0;
}

  

    
