#include <iostream>
#include <string>

using namespace std;

int main() {

  string num_str[11] = {
    
    "0111111",
    "0000110",
    "1011011",
    "1001111",
    "1100110",
    "1101101",
    "1111101",
    "0100111",
    "1111111",
    "1101111",
    "0000000"

  };

  int n;
  int num,num_prev;

  string signal;


  while(cin >> n) {

    if(n==-1) break;

    signal="0000000";
    num_prev=10;

    for(int i=0;i<n;i++) {

      cin >> num;

      for(int j=0;j<7;j++) {

	signal[j]=((num_str[num_prev][j]-48)^(num_str[num][j]-48)+48);

      }

      num_prev=num;

      cout << signal << endl;

    }

  }

  return 0;

}
