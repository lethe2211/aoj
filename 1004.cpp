#include <iostream>
#include <cmath>

using namespace std;


int main() {

  int n;

  int prime[11000];
  int ans;

  prime[0]=prime[1]=0;

  for(int i=2;i<=10000;i++) prime[i]=1;

  for(int i=2;i<=sqrt(10000);i++) {

    if(prime[i]==1) {

      for(int j=2*i;j<=10000;j+=i) {

	prime[j]=0;

      }

    }

  }

  //for(int i=0;i<=10000;i++) if(prime[i]==1) cout << i << " ";

  while(cin >> n) {

    ans=0;

    for(int i=1;i<=n;i++) {

      if(prime[i]==1 && prime[n+1-i]==1) ans++;

    }

    cout << ans << endl;

  }

  return 0;

}
