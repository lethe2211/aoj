#include <iostream>

#define INF 100000000

using namespace std;

int main() {

  int pasta[5],juice[5];

  int min_pasta,min_juice;


  for(int i=0;i<3;i++) cin >> pasta[i];

  for(int i=0;i<2;i++) cin >> juice[i];

  min_pasta=INF;

  for(int i=0;i<3;i++) {

    if(min_pasta>pasta[i]) min_pasta=pasta[i];

  }

  min_juice=INF;

  for(int i=0;i<2;i++) {

    if(min_juice>juice[i]) min_juice=juice[i];

  }

  cout << min_pasta+min_juice-50 << endl;

  return 0;

}
