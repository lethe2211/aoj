#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct r {

  char team;
  int win;
  int lose;

} record;

int comp(const void* c1,const void* c2) {

  r t1=*(r*)c1;
  r t2=*(r*)c2;

  if(t1.win==t2.win) return t1.lose-t2.lose;

  else return t2.win-t1.win;

}

int main() {

  int n;
  char t;

  record rec[10];

  int temp;


  while(cin >> n) {

    if(n==0) break;

    for(int i=0;i<n;i++) {

      cin >> t;
      
      rec[i].team=t;
      
      rec[i].win=rec[i].lose=0;
   
      for(int j=0;j<n-1;j++) {

	cin >> temp;

	switch(temp) {

	case 0:
	  rec[i].win++;
	  break;

	case 1:
	  rec[i].lose++;
	  break;

	}

      }

    }

    qsort(rec,n,sizeof(r),comp);

    for(int i=0;i<n;i++) cout << rec[i].team << endl;

  }

  return 0;

}

