#include <iostream>
#include <string>

using namespace std;

//深さ優先探索
bool dfs(int hand[9],int k) {

  //cout << "dfs: ";
  //for(int i=0;i<9;i++) cout << hand[i] << " ";
  //cout << endl;
  //cout << k << endl;

  //9までポインタを進めることが出来れば成功
  if(k>=9) return true;

  //その数字の手札が0枚なら無視して次の数字へ
  if(hand[k]==0) return dfs(hand,k+1);

  //その数字の手札が3枚以上ならとりあえずそれらをペアにしてみる。ダメだったら足し戻して処理を続行
  if(hand[k]>=3) {

    hand[k]-=3;

    if(dfs(hand,k)) return true;

    hand[k]+=3;

  }

  //これより後は、連番の数字をペアにするしかない

  //7までポインタを進めていたら残りの数字は8,9しかない。これは不可能
  if(k>=7) return false;

  //探索中のポインタから右に3つの数字をペアにする(しかない)
  //できないなら終了
  for(int i=k+1;i<k+3;i++) {

    if(hand[i]==0) return false;

  }

  for(int i=k;i<k+3;i++) hand[i]--;

  //探索を続行
  if(dfs(hand,k)) return true;

  //ダメだったら足し戻して終了
  for(int i=k;i<k+3;i++) hand[i]++;

  return false;

}

int main() {

  string buf;

  int hand[9];

  int flag;
  int ans;


  while(cin >> buf) {

    ans=0;

    for(int i=0;i<9;i++) {

      flag=1;

      for(int j=0;j<9;j++) hand[j]=0;

      //hand[i]には数字iがいくつ入っているかを格納する
      for(int j=0;j<13;j++) {
      
	hand[(buf[j]-1)-48]++;

      }

      buf[13]=i+1+48;

      hand[(buf[13]-1)-48]++;
      //for(int j=0;j<9;j++) cout << hand[j] << " ";
      //cout << endl;
      //5つ以上同じ数字が入っていたらダメ
      if(hand[(buf[13]-1)-48]>=5) {

	hand[(buf[13]-1)-48]--;

	continue;

      }

      //とりあえず同じ数字2つを取り除き、残りの手札でパズルを完成できるかを判定する(全探索？)
      for(int j=0;j<9;j++) {

	if(hand[j]>=2) {

	  hand[j]-=2;

	  //for(int k=0;k<9;k++) cout << hand[k] << " ";
	  //cout << endl;

	  if(dfs(hand,0)==true) {

	    if(ans==0) cout << i+1;

	    else cout << " " << i+1;

	    ans++;

	    break;

	  }

	  hand[j]+=2;

	}

      }

	hand[(buf[13]-1)-48]--;

    }

    if(ans==0) cout << "0";

    cout << endl;

  }

  return 0;

}
