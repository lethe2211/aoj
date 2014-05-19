#include <iostream>

using namespace std;

int main() {

  int n;

  int count;


  while(1) {

    cin >> n;

    if(n==0) break;

    count=0;

    while(n>1) {

      if(n%2==0) n/=2;

      else n=3*n+1;

      count++;

    }

    cout << count << endl;

  }

  return 0;

}
