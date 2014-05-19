#include <iostream>
#include <cstdio>

using namespace std;


int main() {

  int n;

  char str[11];


  while(cin >> n) {

    if(n==0) break;

    sprintf(str,"%o",n);

    for(int i=0;i<11;i++) {

      if(str[i]=='4') str[i]='5';

      else if(str[i]>'4') str[i]+=2;

    }

    cout << str << endl;

  }
  
  return 0;

}
