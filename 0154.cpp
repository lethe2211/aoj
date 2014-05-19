#include <iostream>
#include <cstring>

using namespace std;

//DP(動的計画法)
int main() {

  while(1) {

    int m; //カードの種類
    int a[10],b[10]; //カードの数字とその枚数
    int g; //ゲーム回数
    int n; //総和にしたい数
 
    int dp[8][1001]; //DPテーブル

    cin >> m;

    if(m==0) break;

    for(int i=0;i<m;i++) cin >> a[i] >> b[i];

    cin >> g;


    //DPテーブルを0で初期化
    memset(dp,0,sizeof(dp));

    //0番目までのカードを使って0を作る方法は1通り
    dp[0][0]=1;

    //すべての種類のカードについて
    for(int i=0;i<m;i++) {

      //0～1000までのすべての整数を作る方法をDPテーブルに記述
      for(int j=0;j<=1000;j++) {

	//i+1番目までのカードを使ってjを作るためには、i番目までのカードを使ってj-k*a[i](ただし0<=k<=b[i],0<=k*a[i]<=jを満たす)を作ることが出来なければならない
	for(int k=0;k<=b[i] && k*a[i]<=j;k++) {

	  //これを足していくことで、i+1番目までのカードを使ってjを作る方法の場合の数が求められる
	  dp[i+1][j]+=dp[i][j-k*a[i]];

	}

      }

    }

    for(int i=0;i<g;i++) {

      cin >> n;

      //先にテーブルを作っているので、すでにdp[m][n]には、m番目までのカードを使ってnを作る方法の場合の数、すなわち今回の答えが記されている
      cout << dp[m][n] << endl;
	
    }

  }

  return 0;

}
