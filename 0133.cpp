#include <iostream>

using namespace std;

int main() {

  char map[8][8];

  char temp[8][8];


  for(int i=0;i<8;i++) {

    cin >> map[i];

  }

  //90度回転
  for(int i=0;i<8;i++) for(int j=0;j<8;j++) temp[i][j]=map[7-j][i];

  cout << "90" << endl;

  for(int i=0;i<8;i++) {

    for(int j=0;j<8;j++) {

      cout << temp[i][j];

    }

    cout << endl;

  }

  //180度回転
  for(int i=0;i<8;i++) for(int j=0;j<8;j++) temp[i][j]=map[7-i][7-j];

  cout << "180" << endl;

  for(int i=0;i<8;i++) {

    for(int j=0;j<8;j++) {

      cout << temp[i][j];

    }

    cout << endl;

  }

   //270度回転
  for(int i=0;i<8;i++) for(int j=0;j<8;j++) temp[i][j]=map[j][7-i];

  cout << "270" << endl;

  for(int i=0;i<8;i++) {

    for(int j=0;j<8;j++) {

      cout << temp[i][j];

    }

    cout << endl;

  }
  return 0;

}
