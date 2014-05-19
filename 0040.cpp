#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main() {

  int n;
  string buf;

  string word[300];
  string n_word[300];

  char* tp;
  int idx;
  bool flag;

  cin >> n;

  getline(cin,buf);

  for(int i=0;i<n;i++) {

    getline(cin,buf);

    idx=0;

    tp=strtok((char*)buf.c_str()," ");

    for(int j=0;tp!=NULL;j++) {

      word[j]=tp;

      idx++;
      
      tp=strtok(NULL," ");

    }

    flag=false;

    for(int i=0;i<26;i++) {

      if(i%2==0 || i==13) continue;

      else {

	for(int j=0;j<26;j++) {

	  for(int k=0;k<idx;k++) n_word[k]="";

	  for(int k=0;k<idx;k++) {

	    for(int l=0;l<word[k].size();l++) {

	      n_word[k]+=(i*(word[k][l]-'a')+j)%26+'a';

	    }

	    if(n_word[k]=="this" || n_word[k]=="that") {

	      flag=true;

	    }

	  }

	  if(flag==true) goto Next;

	}

      }

    }

  Next:
    for(int i=0;i<idx;i++) {

      if(i==0) cout << n_word[i];
      
      else cout << " " << n_word[i];

    }

    cout << endl;

  }      

  return 0;

}
    
