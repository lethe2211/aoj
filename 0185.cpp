#include <iostream>
#include <cmath>

using namespace std;

bool prime[1000000];

int main() {

  int n;

  int ans;


  prime[0]=prime[1]=false;

  for(int i=2;i<=1000000;i++) prime[i]=true;
  
  for(int i=2;i<=sqrt(1000000);i++) {

    if(prime[i]==true) {

      for(int j=2*i;j<=1000000;j+=i) {

	prime[j]=false;

      }

    }

  }
  
  while(1) {

    cin >> n;

    if(n==0) break;

    ans=0;

    for(int i=2;i<=n/2;i++) {

      if(prime[i]==true && prime[n-i]==true) ans++;

    }

    cout << ans << endl;

  }
  
  return 0;

}
