#include <iostream>

using namespace std;

int main() {

  int n;
  int pm,pe,pj;


  while(1) {

    cin >> n;

    if(n==0) break;

    for(int i=0;i<n;i++) {

      cin >> pm >> pe >> pj;

      if(pm==100 || pe==100 || pj==100) cout << "A" << endl;

      else if((pm+pe)/2>=90) cout << "A" << endl;

      else if((pm+pe+pj)/3>=80) cout << "A" << endl;

      else if((pm+pe+pj)/3>=70) cout << "B" << endl;

      else if((pm+pe+pj)/3>=50 && (pm>=80 || pe>=80)) cout << "B" << endl;

      else cout << "C" << endl;

    }

  }

  return 0;

}
