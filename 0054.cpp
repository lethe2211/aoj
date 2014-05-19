#include <iostream>

using namespace std;

int main() {

  int a,b,n;

  int s;

  int temp;


  while(cin >> a >> b >> n) {

    s=0;

    for(int i=0;i<n;i++) {

      if(i==0) {

	s+=((10*a)/b)%10;

	temp=(10*a)%b;

      }

      else {

	s+=(10*temp)/b;

	temp=(10*temp)%b;

      }

    }

    cout << s << endl;

  }

  return 0;

}

