#include <iostream>
#include <cmath>

using namespace std;


int main() {

  double a,b,c,d;

  double v,h;


  while(cin >> a >> b >> c >> d) {

    if(a==-1 && b==-1 && c==-1 && d==-1) break;

    v=6378.1*fabs(a-c)*M_PI/180.0;

    h=6378.1*fabs(b-d)*M_PI/180.0;

    cout << (int)(sqrt(v*v+h*h)+0.5) << endl;

  }

  return 0;

}
