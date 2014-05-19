#include <stdio.h>

void dfs(int* data,int* label,int index) {

  int new[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

  int x,y;
  int nx,ny;

  int i;

  label[index]=1;

  x=index%12;
  y=index/12;

  for(i=0;i<4;i++) {

    nx=x+new[i][0];
    ny=y+new[i][1];

    if(nx<0 || nx>11 || ny<0 || ny>11) continue;

    if(label[nx+ny*12]==0 && data[nx+ny*12]==1) dfs(data,label,nx+ny*12);

  }

}
 
int main(void) {

  int data[200];

  int count;
  int idx;
  int label[200];

  char buf[50];
  int i,j;


  while(1) {

    idx=0;

    for(i=0;i<12;i++) {

      if(fgets(buf,sizeof(buf),stdin)==NULL) return 0;

      for(j=0;j<12;j++) {

	data[idx]=buf[j]-'0';

	idx++;

      }

    }

    for(i=0;i<144;i++) label[i]=0;

    count=0;

    for(i=0;i<144;i++) {

      if(data[i]==1 && label[i]==0) {

	dfs(data,label,i);
	count++;

	
      }

    }

    fgets(buf,sizeof(buf),stdin);

    printf("%d\n",count);

  }

  return 0;

}
