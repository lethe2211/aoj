#include <iostream>

using namespace std;

//フェアフィールドの公式
int getdaycount(int year,int month,int day) {

  int days;

  if(month<=2) {

    year--;

    month+=12;

  }

  days=(365*year+year/4-year/100+year/400+306*(month+1)/10+day-428);

  return days;

}

int main() {

  int y1,m1,d1,y2,m2,d2;

  int day1,day2;


  while(cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2) {

    if(y1==-1 || m1==-1 || d1==-1 || y2==-1 || m2==-1 || d2==-1) break;

    day1=getdaycount(y1,m1,d1);

    day2=getdaycount(y2,m2,d2);

    cout << day2-day1 << endl;

  }

  return 0;

}
