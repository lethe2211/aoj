#include <iostream>

using namespace std;

int main() {

  int n;
  int x,y,h,w;

  int sum;


  while(cin >> n) {

    if(n==0) break;

    sum=0;

    for(int i=0;i<n;i++) {

      cin >> x >> y >> h >> w;

      if(x+y+h>160 || w>25) continue;

      else if(x+y+h>140 || w>20) sum+=1600;

      else if(x+y+h>120 || w>15) sum+=1400;

      else if(x+y+h>100 || w>10) sum+=1200;

      else if(x+y+h>80 || w>5) sum+=1000;

      else if(x+y+h>60 || w>2) sum+=800;

      else sum+=600;

    }

    cout << sum << endl;

  }

}
