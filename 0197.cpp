#include <iostream>

using namespace std;

int count;
int g;

int gcd(int x,int y) {

  int temp;

  if(x<y) {

    temp=x;
    x=y;
    y=temp;

  }

  if(y==0) return x;

  else {

    count++;
    return  gcd(y,x%y);

  }

}

int main() {

  int x,y;


  while(cin >> x >> y) {

    if(x==0 && y==0) break;

    count=0;

    g=gcd(x,y);

    cout << g << " " << count << endl;

  }

  return 0;

}
