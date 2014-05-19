#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  vector<int> A;

  int a;

  cin >> n;

  for(int i=0;i<n;i++) {

    A.clear();

    for(int j=0;j<10;j++) {

      cin >> a;
      A.push_back(a);

    }

    stack<int> B,C;

    
