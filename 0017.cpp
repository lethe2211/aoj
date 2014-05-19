#include <iostream>
#include <string>

using namespace std;

int main() {

  string str;


  while(getline(cin,str)) {

    //一文字ずつずらす
    for(int i=0;i<26;i++) {

      for(int j=0;j<str.size();j++) {

	if(str[j]>='a' && str[j]<'z') str[j]+=1;

	else if(str[j]=='z') str[j]='a';

      }

      //the,this,thatがあるかどうか判定
      if(str.find("the")!=string::npos || str.find("this")!=string::npos || str.find("that")!=string::npos) {

	cout << str << endl;

      }

    }

  }

  return 0;

}

  
