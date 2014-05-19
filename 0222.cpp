#include <iostream>
#include <cmath>

using namespace std;

bool prime[10000001];


int main() {

  int n;
  
  prime[0]=prime[1]=false;

  for(int i=2;i<=10000000;i++) prime[i]=true;

  for(int i=2;i<=sqrt(10000000);i++) {

    if(prime[i]==true) {

      for(int j=2*i;j<=10000000;j+=i) {

	prime[j]=false;

      }

    }

  }

  //for(int i=0;i<=10000000;i++) if(prime[i]==true) cout << i << " ";

  while(cin >> n) {

    if(n==0) break;

    for(int i=n;i>=13;i--) {

      if(prime[i]==true && prime[i-2]==true && prime[i-6]==true && prime[i-8]==true) {

	cout << i << endl;
	
	break;

      }

    }

  }

  return 0;

}
