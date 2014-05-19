#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;


int puzzle[2][4];

int dfs(int zero) {

  if(puzzle[0][0]==0 && puzzle[0][1]==1 && puzzle[0][2]==2 && puzzle[0][3]==3 && puzzle[1][0]==4 && puzzle[1][1]==5 &&puzzle[1][2]==6 && puzzle[1][3]==7) return 0;

  
}

int main() {

  string buf;

  int zero;

  char* tp;


  while(getline(cin,buf)) {

    tp=strtok((char*)buf.c_str()," ");

    for(int i=0;tp!=NULL;i++) {

      puzzle[i/4][i%4]=atoi(tp);

      if(atoi(tp)==0) zero=i;

      tp=strtok(NULL," ");

    }

    for(int i=0;i<2;i++) {

      for(int j=0;j<4;j++) {

	cout << puzzle[i][j] << " ";

      }
      cout << endl;
    }

    dfs(zero);

  }

  return 0;

}
