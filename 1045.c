#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int array[20];
int n;
int ans=1000000;

void dfs(int selected,int not_selected,int index) {

  if(index==n) {

    if(ans>abs(selected-not_selected)) {

      ans=abs(selected-not_selected);

    }

    return;

  }

  else {

    dfs(selected+array[index],not_selected,index+1);

    dfs(selected,not_selected+array[index],index+1);

  }

}


int main(void) {

  int idx;
  char buf[300];

  char* tp;

  int i;

  while(1) {

    scanf("%d",&n);

    if(n==0) break;

    getchar();

    fgets(buf,sizeof(buf),stdin);

    buf[strlen(buf)-1]='\0';

    tp=strtok(buf," ");
    array[0]=atoi(tp);

    idx=1;

    while((tp=strtok(NULL," "))!=NULL) {

	array[idx]=atoi(tp);
	idx++;

    }

    //for(i=0;i<idx;i++) printf("%d ",array[i]);

    dfs(0,0,0);

    printf("%d\n",ans);

  }

  return 0;

}
