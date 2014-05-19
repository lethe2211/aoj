#include <iostream>

using namespace std;


int main() {

  int n,k;


  cin >> n;
  
  cin >> k;

  for(int i=0;i<k;i++) {

    int a,b;

    cin >> a >> b;

    if(n%2==0) {

      if(a>n/2) a=n+1-a;

      if(b>n/2) b=n+1-b;

    }

    else {

      if(a>n/2+1) a=n+1-a;

      if(b>n/2+1) b=n+1-b;

    }
      
    if(b<a) {

      if(b%3==0) cout << 3 << endl;

      else cout << b%3 << endl;

    }

    else {

      if(a%3==0) cout << 3 << endl;

      else cout << a%3 << endl;

    }

  }

  return 0;

}
