#include <iostream>
#include <cmath>

using namespace std;


bool prime[50000];

int main() {

  int n;

  int count;


  prime[0]=prime[1]=false;

  for(int i=2;i<=50000;i++) prime[i]=true;

  for(int i=2;i<=sqrt(50000);i++) {

    if(prime[i]==true) {

      for(int j=2*i;j<=50000;j+=i) prime[j]=false;

    }

  }

  while(cin >> n,n) {

    count=0;

    for(int i=0;i<=n/2;i++) {

      if(prime[i]==true && prime[n-i]==true) count++;

    }

    cout << count << endl;

  }

  return 0;

}
