#include <iostream>
#include <string>

using namespace std;


int main() {

  string buf;


  while(cin >> buf) {

    for(int i=0;i<buf.size();i++) {

      if(buf[i]=='A') buf[i]='X';

      else if(buf[i]=='B') buf[i]='Y';

      else if(buf[i]=='C') buf[i]='Z';

      else buf[i]-=3;

    }

    cout << buf << endl;

  }

  return 0;

}
