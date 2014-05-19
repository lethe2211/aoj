#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

			    
int main() {

  vector<int> hand;

  int sum;
  int one;
  char buf[100000];
  
  char* tp;


  while(fgets(buf,sizeof(buf),stdin)!=NULL) {

    buf[strlen(buf)-1]='\0';

    hand.clear();

    tp=strtok(buf," ");

    if(tp[0]=='1') {

      if(tp[1]!='\0') hand.push_back(10+(tp[1]-'0'));

      else hand.push_back(1);

    }

    else hand.push_back(tp[0]-'0');

    if(hand[0]==0) break;

    while(tp!=NULL) {

      tp=strtok(NULL," ");

      if(tp!=NULL) {

	if(tp[0]=='1') {

	  if(tp[1]!='\0') hand.push_back(10+(tp[1]-'0'));

	  else hand.push_back(1);

	}

	else hand.push_back(tp[0]-'0');

      }

    }

    sum=one=0;

    for(int i=0;i<hand.size();i++) {

      if(hand[i]==1) one++;

      else if(hand[i]>=10 && hand[i]<=13) sum+=10;

      else sum+=hand[i];

    }

    for(int i=0;i<one;i++) sum+=11;

    for(int i=0;i<one;i++) {

      if(sum>21) sum-=10;

    }

    if(sum>21) sum=0;

    cout << sum << endl;
    
  }

  return 0;

}
