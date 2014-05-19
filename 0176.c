#include <stdio.h>
#include <string.h>
#include <math.h>

double dist(int table[][3],int k,int rk,int gk,int bk) {

  return sqrt((table[k][0]-rk)*(table[k][0]-rk)+(table[k][1]-gk)*(table[k][1]-gk)+(table[k][2]-bk)*(table[k][2]-bk));

}

int main(void) {

  int rk,gk,bk;

  int table[8][3]={{0,0,0},{0,0,255},{0,255,0},{0,255,255},{255,0,0},{255,0,255},{255,255,0},{255,255,255}};

  char buf[10];
  int color[10];

  double min;
  int ans;

  int i,k;


  while(1) {

    fgets(buf,sizeof(buf),stdin);

    buf[strlen(buf)-1]='\0';

    if(strcmp(buf,"0")==0) break;

    for(i=0;i<strlen(buf)-1;i++) {

      if(buf[i+1]>='0' && buf[i+1]<='9') color[i]=buf[i+1]-'0';

      else if(buf[i+1]=='a') color[i]=10;

      else if(buf[i+1]=='b') color[i]=11;

      else if(buf[i+1]=='c') color[i]=12;

      else if(buf[i+1]=='d') color[i]=13;
      
      else if(buf[i+1]=='e') color[i]=14;

      else if(buf[i+1]=='f') color[i]=15;

    }

    rk=16*color[0]+color[1];

    gk=16*color[2]+color[3];

    bk=16*color[4]+color[5];

    min=256.0;

    //printf("%d %d %d\n",rk,gk,bk);

    for(k=0;k<8;k++) {

      double temp;

      temp=dist(table,k,rk,gk,bk);

      if(min>temp) {

	min=temp;
	ans=k;

      }

    }

    //printf("%d\n",ans);

    switch(ans) {

    case 0:
      puts("black");
      break;

    case 1:
      puts("blue");
      break;

    case 2:
      puts("lime");
      break;

    case 3:
      puts("aqua");
      break;

    case 4:
      puts("red");
      break;

    case 5:
      puts("fuchsia");
      break;

    case 6:
      puts("yellow");
      break;
      
    case 7: 
      puts("white");
      break;

    }

  }

  return 0;

}
