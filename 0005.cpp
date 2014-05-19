#include <iostream>

using namespace std;

int gcd(int a,int b) {

  if(b==0) return a;

  else return gcd(b,a%b);

}

int main() {

  long long a,b;

  long long g,l;

  
  while(cin >> a >> b) {

    g=gcd(a,b);

    l=a*b/g;

    cout << g << " " << l << endl;

  }

  return 0;

}
