#include <iostream>

using namespace std;

char table[10][10] = {

  "* = ****",
  "* =* ***",
  "* =** **",
  "* =*** *",
  "* =**** ",
  " *= ****",
  " *=* ***",
  " *=** **",
  " *=*** *",
  " *=**** "

};

int main() {

  int n;

  char abacus[10][10];
  int digit[5];
 
  int flag=0;

  while(cin >> n) {

    if(flag==1) {

      cout << endl;

    }

    else flag=1;

    digit[0]=n%100000/10000;

    digit[1]=n%10000/1000;

    digit[2]=n%1000/100;

    digit[3]=n%100/10;

    digit[4]=n%10;

    for(int i=0;i<5;i++) {

      for(int j=0;j<8;j++) {

	abacus[i][j]=table[digit[i]][j];

      }

    }

    for(int i=0;i<8;i++) {

      for(int j=0;j<5;j++) {

	cout << abacus[j][i];

      }

      cout << endl;

    }

  }

  return 0;

}
