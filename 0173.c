#include <stdio.h>

int main(void) {

  int am,pm;
  char cls[20];

  int i;

  
  for(i=0;i<9;i++) {

    scanf("%s %d %d",cls,&am,&pm);
    
    printf("%s %d %d\n",cls,am+pm,am*200+pm*300);
    
  }

  return 0;

}
