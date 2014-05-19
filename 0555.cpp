#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main() {

  int n;
  string str;
  string search;

  int count;
  string temp;


  getline(cin,search);

  cin >> n;

  getchar();

  count=0;

  for(int i=0;i<n;i++) {

    getline(cin,str);

    for(int i=0;i<str.length();i++) {

      temp="";

      for(int j=0;j<search.length();j++) {

	temp+=str[(i+j)%str.length()];

      }

      if(temp==search) {

	count++;

	break;

      }

    }

  }

  cout << count << endl;

  return 0;

}
