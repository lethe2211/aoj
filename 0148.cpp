#include <iostream>

using namespace std;

int main() {

  int candy;

  
  while(cin >> candy) {

    if(candy%39==0) cout << "3C39" << endl;

    else if(candy%39<10) cout << "3C0" << candy%39 << endl;

    else cout << "3C" << candy%39 << endl;

  }

  return 0;

}
