#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;


typedef struct rec {

  int id;
  int time;

} record;

record rank[1000001];

int comp(const void* a,const void* b) {

  record t1=*(record*) a;
  record t2=*(record*) b;

  return t1.time-t2.time;

}

int main() {

  int n;
  int c1,m1,s1,m2,s2,m3,s3,m4,s4;


  while(cin >> n,n) {

    for(int i=0;i<n;i++) {

      record tmp;

      cin >> c1 >> m1 >> s1 >> m2 >> s2 >> m3 >> s3 >> m4 >> s4;

      rank[i].id=c1;

      rank[i].time=(60*m1+s1)+(60*m2+s2)+(60*m3+s3)+(60*m4+s4);

    }

    qsort(rank,n,sizeof(rank[0]),comp);

    cout << rank[0].id << endl;

    cout << rank[1].id << endl;

    cout << rank[n-2].id << endl;

  }

  return 0;

}
