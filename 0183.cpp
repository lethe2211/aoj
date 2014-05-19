#include <iostream>
#include <string>

using namespace std;


int main() {

  string buf;

  int board[3][3];


  while(getline(cin,buf)) {

    if(buf[0]=='0') break;

    for(int i=0;i<3;i++) {

      switch(buf[i]) {
	  
      case '+':
	board[0][i]=0;
	break;

      case 'b':
	board[0][i]=1;
	break;

      case 'w':
	board[0][i]=2;
	break;

      }

    }

    for(int i=1;i<3;i++) {

      getline(cin,buf);

      for(int j=0;j<3;j++) {

	switch(buf[j]) {
	  
	case '+':
	  board[i][j]=0;
	  break;

	case 'b':
	  board[i][j]=1;
	  break;

	case 'w':
	  board[i][j]=2;
	  break;

	}

      }

    }
    /*
    for(int i=0;i<3;i++) {

      for(int j=0;j<3;j++) cout << board[i][j];

      cout << endl;

    }
    */
    if((board[0][0]==1 && board[0][1]==1 && board[0][2]==1) || (board[1][0]==1 && board[1][1]==1 && board[1][2]==1) || (board[2][0]==1 && board[2][1]==1 && board[2][2]==1) || (board[0][0]==1 && board[1][0]==1 && board[2][0]==1) || (board[0][1]==1 && board[1][1]==1 && board[2][1]==1) || (board[0][2]==1 && board[1][2]==1 && board[2][2]==1) || (board[0][0]==1 && board[1][1]==1 && board[2][2]==1) || (board[0][2]==1 && board[1][1]==1 && board[2][0]==1)) cout << "b" << endl;

    else if((board[0][0]==2 && board[0][1]==2 && board[0][2]==2) || (board[1][0]==2 && board[1][1]==2 && board[1][2]==2) || (board[2][0]==2 && board[2][1]==2 && board[2][2]==2) || (board[0][0]==2 && board[1][0]==2 && board[2][0]==2) || (board[0][1]==2 && board[1][1]==2 && board[2][1]==2) || (board[0][2]==2 && board[1][2]==2 && board[2][2]==2) || (board[0][0]==2 && board[1][1]==2 && board[2][2]==2) || (board[0][2]==2 && board[1][1]==2 && board[2][0]==2)) cout << "w" << endl;

    else cout << "NA" << endl;

  }

  return 0;

}
	    
  
