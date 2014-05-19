#include <iostream>

using namespace std;

int main() {

  int n;
  int ice[10];

  int a;

  while(1) {

    cin >> n;

    if(n==0) break;

    for(int i=0;i<10;i++) ice[i]=0;

    for(int i=0;i<n;i++) {

      cin >> a;

      ice[a]++;

    }

    for(int i=0;i<10;i++) {

      if(ice[i]==0) cout << "-";

      else for(int j=0;j<ice[i];j++) cout << "*";

      cout << endl;

    }

  }

  return 0;

}
