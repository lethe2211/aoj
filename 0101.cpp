#include <iostream>
#include <string>

using namespace std;

int main() {

  int n;
  string str;

  cin >> n;
  getline(cin,str);

  for(int i=0;i<n;i++) {

    getline(cin,str);

    while(str.find("Hoshino")!=string::npos) {

      str.replace(str.find("Hoshino"),7,"Hoshina");

    }

    cout << str << endl;

  }

  return 0;

}
