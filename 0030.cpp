#include <iostream>

using namespace std;


int n,s;

int count;

void dfs(int i,int j,int sum) {

  //cout << i << " " << j << " " << sum << endl;

  //成功
  if(j==0 && sum==0) {

    count++;

    return;

  }

  //失敗
  if(i==10 || j==0) return;

  //iを取る
  dfs(i+1,j-1,sum-i);

  //iを取らない
  dfs(i+1,j,sum);

  return;

}
  

int main() {

  while(cin >> n >> s) {

    if(n==0 && s==0) break;

    count=0;

    dfs(0,n,s);

    cout << count << endl;

  }

  return 0;

}
