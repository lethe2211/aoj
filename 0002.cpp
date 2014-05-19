#include <iostream>

using namespace std;

int main() {

  int a,b;
  int sum;
  int count;

  while(cin >> a >> b) {

    count=0;

    sum=a+b;

    while(sum>0) {

      sum/=10;

      count++;

    }

    cout << count << endl;

  }

}
