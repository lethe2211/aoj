#include <iostream>

using namespace std;

int main() {

  string str;

  int hit,blow;


  while(1) {

    getline(cin,str);

    if(str=="0 0") break;

    hit=blow=0;

    for(int i=0;i<4;i++) {

      for(int j=0;j<4;j++) {

	if(str[i]==str[j+5]) {

	  if(i==j) hit++;

	  else blow++;

	}

      }

    }

    cout << hit << " " << blow << endl;

  }

  return 0;

}
