#include <iostream>
#include <string>

using namespace std;

int main() {
  
  int t;
  int n;
  string data;

  bool shelf[21000];

  int count;
  int left, right;

  cin >> t;

  for(int i = 0;i < t;i++) {

    cin >> n;
    cin >> data;

    for(int i = 0;i < (int)(sizeof(shelf) / sizeof(shelf[0]));i++) {

      shelf[i] = false;

    }

    count = 0;
    left = 0;
    right = 0;

    if(data[0] == 'Y') shelf[0] = true;

    for(int j = 1;j <= n-1;j++) {

      if(data[2*j-1] == 'Y' || data[2*j] == 'Y') shelf[j] = true;

    }

    if(data[2*n-1] == 'Y') shelf[n] = true;
    if(data[2*n] == 'Y') shelf[n+1] = true;

    for(int j = n+2;j <= 2*n;j++) {

      if(data[2*j-3] == 'Y' || data[2*j-2] == 'Y') shelf[j] = true;

    }

    if(data[4*n-1] == 'Y') shelf[2*n+1] = true;

    // for(int j = 0;j <= 2*n+1;j++) cout << shelf[j] << endl;

    for(int j = 0;j <= 2*n+1;j++) {

      if(shelf[j] == true) count++;

    }

    for(int j = 0;j <= n;j++) {

      if(shelf[j] == false && shelf[j+n+1] == false) continue;

      else {

	if(shelf[j] == true) {

	  left = 1;

	}

	else break;

      }

    }

    for(int j = n;j >= 0;j--) {

      if(shelf[j] == false && shelf[j+n+1] == false) continue;

      else {

	if(shelf[j] == true) {

	  right = 1;

	}

	else break;

      }

    }

    // cout << count << endl;
    // cout << left << endl;
    // cout << right << endl;
    cout << n + count + 2 - left - right << endl;

  }

  return 0;

}
