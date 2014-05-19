#include <iostream>

using namespace std;

int main() {

  int num;
  int s;

  int rand;

  
  cin >> num;

  for(int i=0;i<num;i++) {
    
    cin >> s;

    cout << "Case " << i+1 << ":" << endl;

    rand=s;

    for(int j=0;j<10;j++) {

      rand=rand*rand;

      if(rand>=1000000) rand%=1000000;

      rand/=100;

      cout << rand << endl;

    }

  }

  return 0;

}
