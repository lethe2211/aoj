#include <stdio.h>

int a[10];
int flag;

void push_ball(int b_top,int c_top,int num) {

  //探索成功
  if(num==10) {

    flag=1;
    return;

  }

  //Bの筒の一番上のボールの番号と、今から入れようとしているボールの番号を比較
  //Bの一番上のほうが小さければ、ボールをBの筒に入れる
  if(b_top<a[num]) dfs(a[num],c_top,num+1);

  //Cの筒の一番上のボールの番号と、今から入れようとしているボールの番号を比較
  if(c_top<a[num]) dfs(b_top,a[num],num+1);

  return;

}

int main(void) {

  int n;

  int i;


  scanf("%d",&n);

  for(i=0;i<n;i++) {

    scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);

    flag=0;

    push_ball(0,0,0);

    if(flag==1) printf("YES\n");
    else printf("NO\n");

  }

  return 0;

}
