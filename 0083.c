#include <stdio.h>

int main(void) {

  int year,month,day;


  while(scanf("%d %d %d",&year,&month,&day)!=EOF) {

    if(year<1868) {

      printf("pre-meiji\n");

    } else if(year==1868) {

      if(month<9) printf("pre-meiji\n");

      else if(month==9 && day<8) printf("pre-meiji\n");

      else printf("meiji 1 %d %d\n",month,day);

    } else if(year<1912) {

      printf("meiji %d %d %d\n",year-1867,month,day);

    } else if(year==1912) {

      if(month<7) printf("meiji 45 %d %d\n",month,day);

      else if(month==7 && day<30) printf("meiji 45 %d %d\n",month,day);

      else printf("taisho 1 %d %d\n",month,day);

    } else if(year<1926) {

      printf("taisho %d %d %d\n",year-1911,month,day);

    } else if(year==1926) {

      if(month<12) printf("taisho 15 %d %d\n",month,day);

      else if(month==12 && day<25) printf("taisho 15 %d %d\n",month,day);

      else printf("showa 1 %d %d\n",month,day);
    
    } else if(year<1989) {

      printf("showa %d %d %d\n",year-1925,month,day);

    } else if(year==1989) {

      if(month==1 && day<8) printf("showa 64 %d %d\n",month,day);

      else printf("heisei 1 %d %d\n",month,day);

    } else {

      printf("heisei %d %d %d\n",year-1988,month,day);

    }

  }

  return 0;

}
