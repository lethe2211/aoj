#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> fib_iter(int n) {

  vector<int> fib;

  int a = 1;
  int b = 1;
  int temp;

  for(int i = 0;i < n;i++) {

    temp = a;
    a += b;
    b = temp;

    a %= 1001;

    fib.push_back(a);

  }

  return fib;

}

int main() {

  vector<int> fib, fibset;
  int v, d;

  fib = fib_iter(1001);

  

  while(cin >> v >> d) {

    int count = 1;
    vector<int> fibsubset;

    for(int i = 0;i < v;i++) {
      
      fibsubset.push_back(fib[i]);

    }

    sort(fibsubset.begin(), fibsubset.end());

    for(int i = 0;i < v;i++) {

      //cout << fibsubset[i] << " ";

      if(i != v-1 && abs(fibsubset[i] - fibsubset[i+1]) >= d) {

	//cout << " | "; 
	count++;

      }

    }

    cout << count << endl;

  }

  return 0;

}

