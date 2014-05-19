#include <iostream>
#include <vector>

using namespace std;


int main() {

  int n,m;

  vector<int> board,dice;
  int pos;
  int turn;
  int move;


  while(cin >> n >> m) {

    if(n==0 && m==0) break;

    board.clear();

    for(int i=0;i<n;i++) {

      int tmp;

      cin >> tmp;

      board.push_back(tmp);

    }

    //for(int i=0;i<n;i++) cout << board[i] << " ";

    dice.clear();

    for(int i=0;i<m;i++) {

      int tmp;

      cin >> tmp;

      dice.push_back(tmp);

    }

    pos=1;

    for(turn=1;turn<=m;turn++) {

      move=dice[turn-1];

      pos+=move;

      if(pos>=n) break;

      pos+=board[pos-1];
    
      if(pos>=n) break;

    }

    cout << turn << endl;

  }

  return 0;

}

