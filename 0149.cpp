#include <iostream>

using namespace std;

int main() {

  double eyesight[2];

  int a[2],b[2],c[2],d[2];


  for(int i=0;i<2;i++) a[i]=0;
  for(int i=0;i<2;i++) b[i]=0;
  for(int i=0;i<2;i++) c[i]=0;
  for(int i=0;i<2;i++) d[i]=0;
  /*
  while(cin >> eyesight[0] >> eyesight[1]) {

    for(int i=0;i<2;i++) {

      if(eyesight[i]>=1.1) a[i]++;

      else if(eyesight[i]>=0.6) b[i]++;

      else if(eyesight[i]>=0.2) c[i]++;
      
      else d[i]++;

    }

  }
  */
  cout << a[0] << " " << a[1] << endl;
  cout << b[0] << " " << b[1] << endl;
  cout << c[0] << " " << c[1] << endl;
  cout << d[0] << " " << d[1] << endl;

  return 0;

}
