#include <stdio.h>

int n,s;

int ans;

//depth-first search
void dfs(int i,int sum,int n) {

  //探索成功
  if((sum==s) && (n==0)) {

    ans++;
    return;

  }

  //探索失敗
  if((i==10) || (n==0)) return;

  //探索途中
  dfs(i+1,sum,n); //iを使わないパターン(これを探索失敗まで続ける)
  dfs(i+1,sum+i,n-1); //iを使うパターン(↑が終わったらこっち)

}

int main(void) {

  while(scanf("%d %d",&n,&s)!=EOF) {

    if((n==0) && (s==0)) break;

    ans=0;

    dfs(0,0,n);

    printf("%d\n",ans);

  }

  return 0;

}
      
