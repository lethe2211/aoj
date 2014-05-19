#include <iostream>
#include <string>
#include <sstream>

using namespace std;


string IntToString(int number) {

  ostringstream ss;

  ss << number;

  return ss.str();

}

int main() {

  int n;
  string seq;

  string prev_seq;
  char prev_char;
  int count;


  while(cin >> n,n) {

    cin >> seq;

    for(int i=0;i<n;i++) {

      prev_seq=seq;

      seq="";

      prev_char=prev_seq[0];

      count=1;

      for(int j=0;j<prev_seq.size();j++) {

	if(j==prev_seq.size()-1) {

	  seq+=IntToString(count);

	  seq+=prev_char;

	}

	else if(prev_char==prev_seq[j+1]) {

	  count++;

	}

	else {

	  seq+=IntToString(count);

	  seq+=prev_char;

	  prev_char=prev_seq[j+1];

	  count=1;

	}

      }

    }

    cout << seq << endl;

  }

  return 0;

}

      
