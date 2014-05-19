#include <iostream>
#include <string>

using namespace std;

int main() {

  string str;
  string temp;
  int JOIcount,IOIcount;

  string::size_type index;


  while(getline(cin,str)) {

    index=0;
    JOIcount=0;
   
    temp=str;

    while(1) {

      index=temp.find("JOI");

      if(index==string::npos) break;

      temp=temp.substr(index+1,temp.length());

      JOIcount++;

    }

    index=0;
    IOIcount=0;

    temp=str;

    while(1) {

      index=temp.find("IOI");

      if(index==string::npos) break;

      temp=temp.substr(index+1,temp.length());

      IOIcount++;

    }

    cout << JOIcount << "\n" << IOIcount << endl;
    
  }

  return 0;

}
