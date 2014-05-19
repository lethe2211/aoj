#include <iostream>

using namespace std;

char table[5][6] = {

  {'a','f','k','p','u','z'},
  {'b','g','l','q','v','.'},
  {'c','h','m','r','w','?'},
  {'d','i','n','s','x','!'},
  {'e','j','o','t','y',' '}

};

int main() {

  string buf;


  while(getline(cin,buf)) {

    if(buf.size()%2==1) goto NA;

    for(int i=0;i<buf.size();i++) {

      if(i%2==0 && ((buf[i]-'0')<1 || (buf[i]-'0')>6)) goto NA;

      if(i%2==1 && ((buf[i]-'0')<1 || (buf[i]-'0')>5)) goto NA;

    }

    for(int i=0;i<buf.size()/2;i++) {

      cout << table[(buf[2*i+1]-'0'-1)][(buf[2*i]-'0'-1)];

    }

    cout << endl;

    continue;


  NA:
    cout << "NA" << endl;

  }

  return 0;

}
