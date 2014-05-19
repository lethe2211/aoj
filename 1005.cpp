#include <iostream>

using namespace std;

int main() {

  int n;

  int array[110][110];

  while(cin >> n) {

    for(int i = 0;i < n*n;i++) {

      int temp;

      cin >> temp;

      array[i/n][i%n] = temp;

    }

    
  }

  return 0;

}
