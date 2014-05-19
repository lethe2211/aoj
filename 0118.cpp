#include <iostream>
#include <string>

using namespace std;


//int dx[4]={1,0,-1,0};
//int dy[4]={0,1,0,-1};

int h,w;

int map[101][101];
int checked[101][101];
int mark;
int kind;

void dfs(int i,int j) {

  cout << i << " " << j << " " << mark << endl;

  if(i<0 || i>=h || j<0 || j>=w) return;

  if(checked[i][j]>0) return;

  if(map[i][j]!=kind) return;
 
  checked[i][j]=mark;

  //for(int i=0;i<4;i++) dfs(i+dy[i],j+dx[i],kind);

  dfs(i+1,j);

  dfs(i-1,j);

  dfs(i,j+1);

  dfs(i,j-1);

}
    
int main() {

  string buf;


  while(cin >> h >> w) {

    if(h==0 && w==0) break;

    getline(cin,buf);

    for(int i=0;i<h;i++) {

      getline(cin,buf);

      for(int j=0;j<w;j++) {

	switch(buf[j]) {

	case '@':
	  map[i][j]=0;
	  break;

	case '#':
	  map[i][j]=1;
	  break;

	case '*':
	  map[i][j]=2;
	  break;

	}

      }

    }
    /*
    for(int i=0;i<h;i++) {

      for(int j=0;j<w;j++) {

	cout << map[i][j];

      }

      cout << endl;

    }
    */
    for(int i=0;i<h;i++) {

      for(int j=0;j<w;j++) checked[i][j]=0;

    }	

    mark=0;

    for(int i=0;i<h;i++) {

      for(int j=0;j<w;j++) {

	if(checked[i][j]==0) {

	  kind=map[i][j];

	  dfs(i,j);

	  mark++;

	}

      }

    }

    for(int i=0;i<h;i++) {

      for(int j=0;j<w;j++) {

	cout << checked[i][j];

      }

      cout << endl;

    }

    cout << mark << endl;

  }

  return 0;

}
