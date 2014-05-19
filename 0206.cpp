#include <iostream>

using namespace std;

int main() {

  int l;
  int m,n;

  int saving;
  int success;


  while(cin >> l) {

    if(l==0) break;

    saving=0;
    success=0;

    for(int i=0;i<12;i++) {

      cin >> m >> n;

      saving+=m-n;

      if(saving>=l) {
	
	if(success==0) success=i+1;

      }

    }

    if(success>0) cout << success << endl;
    else cout << "NA" << endl;
    
  }

  return 0;

}
