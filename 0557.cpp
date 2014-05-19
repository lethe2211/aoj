#include <iostream>
#include <cstring>

using namespace std;


long long dp[101][21];

int main() {

  int n;
  int a[101];


  cin >> n;

  for(int i=0;i<n;i++) cin >> a[i];

  memset(dp,0,sizeof(dp));

  dp[1][a[0]]=1; //1番目まで計算したときに途中結果がa[0]である場合は１通り

  for(int i=1;i<=n-1;i++) {

    //DP(dp[i+1][j±a[i]]=Σ(j=0/j=20)dp[i][j])
    //i+1番目まで計算した途中結果が、ある値k(=j±a[i])であるということは、i番目まで計算した途中結果が、ある値jであって、かつa[i](i+1番目の数字)を計算したということ
    for(int j=0;j<=20;j++) {

      //DPテーブルが0でないとき(枝刈り)
      if(dp[i][j]>0) {

	int plus=j+a[i];
	int minus=j-a[i];

	if(plus>=0 && plus<=20) dp[i+1][plus]+=dp[i][j];

	if(minus>=0 && minus<=20) dp[i+1][minus]+=dp[i][j];

      }

    }

  }

  //n-1番目まで計算した途中結果の値がa[n-1](n番目の数字。ただし0<=a[n-1]<=9)であるならば、それは、その後にa[n-1]を足そうが引こうが必ず正しいと確かめることが出来る場合となっている。
  //よって、dp[n-1][a[n-1]]の値が等式の個数となる
  cout << dp[n-1][a[n-1]] << endl;

  return 0;

}
