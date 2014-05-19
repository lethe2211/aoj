#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int array[10][10];


int main() {

  int n;


  vector<int> data;
  map<int, int> count;

  while(cin >> n) {

    for(int i = 0;i < 10;i++) {

      for(int j = 0;j < 10;j++) {

	array[i][j] = 0;

      }

    }

    for(int i = 0;i < n;i++) {

      string temp;

      cin >> temp;

      data.push_back(temp[0]-'0');
      data.push_back(temp[1]-'0');
      
      array[temp[0]-'0'][temp[1]-'0']++;

    }

    for(int i = 0; i < data.size();i++) {

      count[data[i]]++;

    }

    int odd = 0;

    for(int i = 0;i <= 6;i++) {

      if(count[i] % 2 == 1) {

	odd++;

      }

    }

    if(odd == 0) {

      cout << "Yes" << endl;

      
    }

    else if(odd == 2) {

      for(int i = 0;i <= 6;i++) {

	if(count[i] % 2 == 1) {

	  
	}

      }

    }

    else {

      cout << "No" << endl;

    }

  }

  return 0;

}
