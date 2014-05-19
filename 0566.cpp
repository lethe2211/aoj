#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct rec {

  int team;
  int point;

} record;

int main() {

  int n;
  int a,b,c,d;

  record rec[101];
  int rank;
  

  cin >> n;

  for(int i=0;i<=100;i++) {

    rec[i].team=i;

    rec[i].point=0;

  }

  for(int i=0;i<n*(n-1)/2;i++) {

    cin >> a >> b >> c >> d;

    if(c==d) {

      rec[a].point++;

      rec[b].point++;

    }

    else if(c<d) rec[b].point+=3;

    else rec[a].point+=3;

  }

  for(int i=1;i<=n;i++) {

    rank=n;

    for(int j=1;j<=n;j++) {

      if(rec[i].point>=rec[j].point && i!=j) rank--;

    }

    cout << rank << endl;

  }

  return 0;

}
