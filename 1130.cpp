#include <iostream>
#include <string>

using namespace std;


int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int w,h;
int map[21][21];

int count;
int init_x,init_y;

//深さ優先探索
void dfs(int x,int y) {

  //範囲外なら探索中止
  if(x<0 || x>=w || y<0 || y>=h) return;

  //壁とか探索済みのところなら探索中止
  if(map[x][y]>0) return;

  //それ以外ならカウントアップして探索済みにする
  map[x][y]=3;

  count++;

  //4近傍について深さ優先探索を続行
  for(int i=0;i<4;i++) dfs(x+dx[i],y+dy[i]);

}

int main() {

  string buf;

  while(cin >> w >> h) {

    if(w==0 && h==0) break;

    getline(cin,buf);

    for(int i=0;i<h;i++) {

      getline(cin,buf);

      for(int j=0;j<w;j++) {

	switch(buf[j]) {

	case '.':
	  map[j][i]=0;
	  break;

	case '#':
	  map[j][i]=1;
	  break;

	case '@':
	  map[j][i]=0;
	  init_x=j;
	  init_y=i;
	  break;

	}

      }

    }

    count=0;

    dfs(init_x,init_y);

    cout << count << endl;

  }

  return 0;

}
