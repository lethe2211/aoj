#include <stdio.h>
#include <string.h>

int main(void) {

  int t;
  int n,h[150];
  int up_max,down_max;
  int i,j;
  char buf[600];
  char* p;

  scanf("%d",&t);

  for(i=0;i<t;i++) {

    scanf("%d",&n);
    getchar();

    fgets(buf,sizeof(buf),stdin);
    buf[strlen(buf)-1]='\0';

    p=strtok(buf," ");
    h[0]=atoi(p);
    for(j=0;j<n-1;j++) {
      p=strtok(NULL," ");
      h[j+1]=atoi(p);
    }
    
    up_max=down_max=0;

    for(j=0;j<n-1;j++) {
      if(up_max<(h[j+1]-h[j])) up_max=h[j+1]-h[j];
      if(down_max<(h[j]-h[j+1])) down_max=h[j]-h[j+1];
    }

    printf("%d %d\n",up_max,down_max);

  }

  return 0;

}
    
