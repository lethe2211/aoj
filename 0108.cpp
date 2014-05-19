#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main() {

  int n;
  vector<int> s;

  vector<int> prev,n_s;
  map<int,int> runlength;
  int count;


  while(cin >> n) {

    if(n==0) break;

    s.clear();

    for(int i=0;i<n;i++) {

      int tmp;

      cin >> tmp;

      s.push_back(tmp);

    }

    n_s=s;

    count=0;

    do {

      prev=n_s;

      runlength.clear();

      for(int i=0;i<n;i++) runlength[n_s[i]]++;

      for(int i=0;i<n;i++) n_s[i]=runlength[n_s[i]];

      if(prev==n_s) break;
     
      count++;

    } while(1);

    cout << count << endl;

    for(int i=0;i<n;i++) {

      if(i==0) cout << n_s[0];

      else cout << " " << n_s[i];

    }

    cout << endl;

  }

  return 0;

}
