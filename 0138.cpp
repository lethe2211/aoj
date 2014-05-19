#include <iostream>
#include <map>
#include <cstdlib>

using namespace std;

int comp(const void* a,const void* b) {

  pair<int,double>* t1=(pair<int,double>*) a;
  pair<int,double>* t2=(pair<int,double>*) b;

  if(t1->second > t2->second) return 1;

  else if(t1->second < t2->second) return -1;

  else return 0;

}

int main() {

  int id;
  double time;

  pair<int,double> rec1[10],rec2[10],rec3[10],reclose[20];

  while(cin >> id >> time) {

    rec1[0].first=id;
    rec1[0].second=time;

    for(int i=1;i<8;i++) {

      cin >> id >> time;

      rec1[i].first=id;
      rec1[i].second=time;
      
    }

    for(int i=0;i<8;i++) {

      cin >> id >> time;

      rec2[i].first=id;
      rec2[i].second=time;

    }

    for(int i=0;i<8;i++) {

      cin >> id >> time;

      rec3[i].first=id;
      rec3[i].second=time;

    }

    qsort(rec1,8,sizeof(rec1[0]),comp);

    qsort(rec2,8,sizeof(rec2[0]),comp);

    qsort(rec3,8,sizeof(rec3[0]),comp);

    //for(int i=0;i<8;i++) cout << rec1[i].first << " " << rec1[i].second << endl;
    
    for(int i=0;i<18;i++) {

      if(i<6) {

	reclose[i].first=rec1[(i%6)+2].first;
	reclose[i].second=rec1[(i%6)+2].second;

      }

      else if(i<12) {

	reclose[i].first=rec2[(i%6)+2].first;
	reclose[i].second=rec2[(i%6)+2].second;

      }

      else {

	reclose[i].first=rec3[(i%6)+2].first;
	reclose[i].second=rec3[(i%6)+2].second;

      }

    }

    //for(int i=0;i<18;i++) cout << reclose[i].first << " " << reclose[i].second << endl;
    
    qsort(reclose,18,sizeof(reclose[0]),comp);
    
    for(int i=0;i<2;i++) cout << rec1[i].first << " " << rec1[i].second << endl;

    for(int i=0;i<2;i++) cout << rec2[i].first << " " << rec2[i].second << endl;

    for(int i=0;i<2;i++) cout << rec3[i].first << " " << rec3[i].second << endl;

    for(int i=0;i<2;i++) cout << reclose[i].first << " " << reclose[i].second << endl;
    
 }

  return 0;

}
    
  
