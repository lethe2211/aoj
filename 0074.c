#include <stdio.h>

int main(void) {

  int hour,minite,second;
  int r_hour,r_minite,r_second;
  int r_hour3,r_minite3,r_second3;
  int time,rest;

  while(1) {

    scanf("%d %d %d",&hour,&minite,&second);

    if(hour==-1 && minite==-1 && second==-1) break;

    time=3600*hour+60*minite+second;

    rest=7200-time;

    r_second=rest%60;
    r_minite=(int)(rest/60)%60;
    r_hour=rest/3600;

    r_second3=3*rest%60;
    r_minite3=(int)(3*rest/60)%60;
    r_hour3=3*rest/3600;
    
    if(r_hour<10) printf("0");
    printf("%d:",r_hour);
    if(r_minite<10) printf("0");
    printf("%d:",r_minite);
    if(r_second<10) printf("0");
    printf("%d\n",r_second);

    if(r_hour3<10) printf("0");
    printf("%d:",r_hour3);
    if(r_minite3<10) printf("0");
    printf("%d:",r_minite3);
    if(r_second3<10) printf("0");
    printf("%d\n",r_second3);

  }

  return 0;
    

}
