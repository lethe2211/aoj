#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int n;
  int i,h,w;

  double bmi;
  int id;

  while(cin >> n) {

    if(n==0) break;

    bmi=100.0;

    for(int idx=0;idx<n;idx++) {

      cin >> i >> h >> w;

      if(fabs((double)w/((double)(h*h)/10000.0)-22.0)<fabs(bmi-22.0)) {

	id=i;

	bmi=(double)w/((double)(h*h)/10000.0);

      }

      else if(fabs((double)w/((double)(h*h)/10000.0)-22.0)==fabs(bmi-22.0)) {

	if(id>i) id=i;

	bmi=(double)w/((double)(h*h)/10000.0);

      }

    }

    cout << id << endl;

  }

}
