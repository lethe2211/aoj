#include <iostream>

using namespace std;

int main() {

  int i;
  int a[30];

  int res;
  
  int index;


  while(1) {

    cin >> i;

    if(i==0) break;

    for(int j=0;j<i;j++) cin >> a[j];

    res=32;

    index=0;

    while(res>0) {

      res-=(res-1)%5;

      cout << res << endl;

      res-=a[(index%i)];

      if(res<0) res=0;

      index++;

      cout << res << endl;

    }

  }

  return 0;

}
