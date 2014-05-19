#include <iostream>

#define MAX 21960000

using namespace std;

int main() {

  int m,n;

  int ans;

  int temp;


  while(cin >> m) {

    if(m==0) break;

    cin >> n;

    ans=0;

    for(int i=m;i<=n;i++) {

      temp=i;

      if(MAX%temp==0) {ans++; cout << temp << " ";}

    }

    cout << ans << endl;

  }


  return 0;

}
