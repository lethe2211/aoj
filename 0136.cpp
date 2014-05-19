#include <iostream>

using namespace std;

int main() {

  int n;
  double h;

  int dist[6];


  cin >> n;

  for(int i=0;i<6;i++) dist[i]=0;

  for(int i=0;i<n;i++) {

    cin >> h;

    if(h<165.0) dist[0]++;

    else if(h<170.0) dist[1]++;

    else if(h<175.0) dist[2]++;

    else if(h<180.0) dist[3]++;

    else if(h<185.0) dist[4]++;

    else dist[5]++;

  }

  for(int i=0;i<6;i++) {

    cout << i+1 << ":";

    for(int j=0;j<dist[i];j++) cout << "*";

    cout << endl;

  }

  return 0;

}
