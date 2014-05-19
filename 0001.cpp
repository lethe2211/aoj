#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  vector<int> height;
  int h;

  for(int i=0;i<10;i++) {

    cin >> h;

    height.push_back(h);

  }

  sort(height.begin(),height.end());

  for(int i=0;i<3;i++) {

    cout << height[9-i] << endl;

  }

  return 0;

}
