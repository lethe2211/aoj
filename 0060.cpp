#include <iostream>

using namespace std;

int main() {

  int c1,c2,c3;

  int dealed[10];
  int res;
  int count;

  while(cin >> c1 >> c2 >> c3) {
    
    for(int i=1;i<=10;i++) {

      if(i==c1 || i==c2 || i== c3) dealed[i]=1;

      else dealed[i]=0;

    }  

    res=20-(c1+c2);
    count=0;

    for(int i=1;i<=10;i++) {

      if(dealed[i]==0 && i<=res) count++;

    }

    if(count>=4) cout << "YES" << endl;

    else cout << "NO" << endl;

  }

  return 0;

}

	
