#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main() {

  char buf[1100];

  char word[1100];

  char* tp;
  int len;
  int flag=0;


  fgets(buf,sizeof(buf),stdin);

  buf[strlen(buf)-1]='\0';

  tp=strtok(buf,",. ");

  len=strlen(tp);

  if(len>=3 && len<=6) {

    flag=1;
    cout << tp;

  }

  while(tp!=NULL) {

    tp=strtok(NULL,",. ");

    if(tp!=NULL) {
      
      len=strlen(tp);

      if(len>=3 && len<=6) {

	if(flag==1) cout << " " << tp;

	else {

	  cout << tp;
	  flag=1;

	}

      }

    }

  }

  cout << endl;

  return 0;

}
