#include <iostream>

using namespace std;

int main() {

  int sum;
  int price[10];

  int rest;

  
  while(1) {

    cin >> sum;

    if(sum==0) break;

    for(int i=0;i<9;i++) cin >> price[i];

    rest=sum;

    for(int i=0;i<9;i++) rest-=price[i];

    cout << rest << endl;

  }

  return 0;

}
