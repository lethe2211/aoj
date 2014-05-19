#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int n;

  int a,b,c;

  cin >> n;

  for(int i=0;i<n;i++) {

    cin >> a >> b >> c;

    if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b) cout << "YES" << endl;

    else cout << "NO" << endl;

  }

  return 0;

}
