#include <iostream>
#include <vector>

using namespace std;


int main() {

  int n;
  vector<int> data;
  int key;

  int l,h,m;
  int count;


  while(cin >> n) {

    if(n==0) break;

    data.clear();

    for(int i=0;i<n;i++) {

      int tmp;

      cin >> tmp;

      data.push_back(tmp);

    }

    //for(int i=0;i<n;i++) cout << data[i] << " ";

    cin >> key;

    count=0;

    l=0;

    h=n-1;

    while(l<=h) {

      count++;

      m=(l+h)/2;

      if(key==data[m]) break;

      else if(key<data[m]) h=m-1;

      else l=m+1;

    }

    cout << count << endl;

  }

  return 0;

}

      

      
