#include <iostream>
#include <cstdio>
#include <vector>

#define INF 1000000

using namespace std;

typedef struct stf {

  int value;
  int weight;

} stuff;

int w;
int n;
stuff s[1100];
int min_w=INF;
int taken[1100];

//iはお宝の番号、jは
int rec(int i,int j) {

  int res; //関数が返す値
  int temp;

  //探索成功
  if(i==n) {
    
    res=0;

    if(min_w>w-j) min_w=w-j;

  }

  //重さが風呂敷の残り重量を超えているので無視
  else if(s[i].weight>j) {

    res=rec(i+1,j);
    taken[i]=0;

  }

  else {
    
    temp=rec(i+1,j);

    //お宝を取る
    if(temp<rec(i+1,j-s[i].weight)+s[i].value) {

      taken[i]=1;
      res=rec(i+1,j-s[i].weight)+s[i].value;

    }

    //お宝を取らない
    else {

      res=temp;
      taken[i]=0;

    }

  }

  return res;
  
}

int main() {

  while(1) {

    cin >> w;

    if(w==0) break;

    cin >> n;

    for(int i=0;i<n;i++) scanf("%d,%d",&s[i].value,&s[i].weight);
  
    min_w=INF;

    cout << rec(0,w) << endl;
    //puts("");
    
    //puts("");
    
    
  }

  return 0;

}
