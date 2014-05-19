#include <iostream>

using namespace std;

int main() {

  int n;

  long long int sum;


  cin >> n;

  sum=0;

  for(int i=0;i<n;i++) {

    long long int val;

    cin >> val;

    sum+=val;

  }

  cout << sum/n << endl;

  return 0;

}
