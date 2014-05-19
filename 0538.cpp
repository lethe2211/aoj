#include <iostream>
#include <cstdio>

using namespace std;


int main() {

  int n,m;
  string s;

  string p;
  int count;
 
  string temp;
  string::size_type index;


  while(cin >> n,n) {

    cin >> m;

    getchar();

    getline(cin,s);

    p="I";

    for(int i=0;i<n;i++) p+="OI";

    temp=s;

    index=0;

    count=0;

    while(1) {

      index=temp.find(p);

      if(index==string::npos) break;

      temp=temp.substr(index+1,temp.length());

      count++;

    }

    cout << count << endl;

  }

  return 0;

}
