#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;


int main() {

  int n,m;
  int result[1100][110];

  string str;
  int answer[110];

  char* tp;
  int temp;
  int max_num,max_id;


  while(1) {

    cin >> n;
    cin >> m;

    if(n==0 && m==0) break;

    getline(cin,str);

    for(int i=0;i<n;i++) {

      getline(cin,str);

      tp=strtok((char*)str.c_str()," ");

      result[i][0]=atoi(tp);

      for(int j=1;j<m;j++) {

	tp=strtok(NULL," ");

	result[i][j]=atoi(tp);

      }

    }

    /*
    for(int i=0;i<n;i++) {

      for(int j=0;j<m;j++) {

	cout << result[i][j] << " ";

      }

      cout << endl;

    }
    */

    for(int i=0;i<m;i++) {

      temp=0;

      for(int j=0;j<n;j++) {

	temp+=result[j][i];

      }

      answer[i]=temp;

      //cout << temp << endl;

    }

    for(int i=0;i<m;i++) {

      max_num=0;

      for(int j=0;j<m;j++) {

	if(max_num<answer[j]) {

	  max_num=answer[j];
	  max_id=j;

	}

      }

      if(i==0) cout << max_id+1;

      else cout << " " << max_id+1;

      answer[max_id]=0;

    }

    cout << endl;
	
  }

  return 0;
  
}
  
