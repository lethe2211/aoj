#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  string input;

  while(cin >> input) {

    string answer;

    int prev = -1;
    int count;
    
    vector<int> run;
    vector<int> length;

    for(int i = 0;i < input.length();i++) {

      int innum = (int)input[i] - '0';

      if(i == 0) {

      	prev = innum;
      	count = 1;

      }

      else if(innum == prev) {

	count++;

      }

      else {

	run.push_back(prev);
	length.push_back(count);
	count = 1;
	prev = innum;

      }

      if(i == input.length()-1) {

      	run.push_back(innum);
      	length.push_back(count);

      }

    }

    // for(int i = 0;i < run.size();i++) {

    //    cout << run[i] << endl;
    //    cout << length[i] << endl;

    // }

    answer = "";

    for(int i = 0;i < run.size();i++) {

      switch(run[i]) {

      case 0:

	if(length[i] != 1) {

	  for(int j = 0;j < length[i]-1;j++) {

	    answer += " ";

	  }

	}
	
	break;

      case 1:
	switch(length[i] % 5) {
	case 1:
	  answer += "\'";
	  break;

	case 2:
	  answer += ",";
	  break;

	case 3:
	  answer += ".";
	  break;

	case 4:
	  answer += "!";
	  break;

	case 0:
	  answer += "?";
	  break;
	}
      	  
	break;

      case 2:

	switch(length[i] % 6) {
	case 1:
	  answer += "a";
	  break;

	case 2:
	  answer += "b";
	  break;

	case 3:
	  answer += "c";
	  break;

	case 4:
	  answer += "A";
	  break;

	case 5:
	  answer += "B";
	  break;

	case 0:
	  answer += "C";
	  break;

	}
	
	break;

      case 3:

	switch(length[i] % 6) {
	case 1:
	  answer += "d";
	  break;

	case 2:
	  answer += "e";
	  break;

	case 3:
	  answer += "f";
	  break;

	case 4:
	  answer += "D";
	  break;

	case 5:
	  answer += "E";
	  break;

	case 0:
	  answer += "F";
	  break;

	}
	
	break;

      case 4:

	switch(length[i] % 6) {
	case 1:
	  answer += "g";
	  break;

	case 2:
	  answer += "h";
	  break;

	case 3:
	  answer += "i";
	  break;

	case 4:
	  answer += "G";
	  break;

	case 5:
	  answer += "H";
	  break;

	case 0:
	  answer += "I";
	  break;

	}
	
	break;

      case 5:

	switch(length[i] % 6) {
	case 1:
	  answer += "j";
	  break;

	case 2:
	  answer += "k";
	  break;

	case 3:
	  answer += "l";
	  break;

	case 4:
	  answer += "J";
	  break;

	case 5:
	  answer += "K";
	  break;

	case 0:
	  answer += "L";
	  break;

	}
	
	break;

      case 6:

	switch(length[i] % 6) {
	case 1:
	  answer += "m";
	  break;

	case 2:
	  answer += "n";
	  break;

	case 3:
	  answer += "o";
	  break;

	case 4:
	  answer += "M";
	  break;

	case 5:
	  answer += "N";
	  break;

	case 0:
	  answer += "O";
	  break;

	}
	
	break;

      case 7:

	switch(length[i] % 8) {
	case 1:
	  answer += "p";
	  break;

	case 2:
	  answer += "q";
	  break;

	case 3:
	  answer += "r";
	  break;

	case 4:
	  answer += "s";
	  break;

	case 5:
	  answer += "P";
	  break;

	case 6:
	  answer += "Q";
	  break;

	case 7:
	  answer += "R";
	  break;

	case 0:
	  answer += "S";
	  break;

	}
	
	break;

      case 8:

	switch(length[i] % 6) {
	case 1:
	  answer += "t";
	  break;

	case 2:
	  answer += "u";
	  break;

	case 3:
	  answer += "v";
	  break;

	case 4:
	  answer += "T";
	  break;

	case 5:
	  answer += "U";
	  break;

	case 0:
	  answer += "V";
	  break;

	}
	
	break;

      case 9:

	switch(length[i] % 8) {
	case 1:
	  answer += "w";
	  break;

	case 2:
	  answer += "x";
	  break;

	case 3:
	  answer += "y";
	  break;

	case 4:
	  answer += "z";
	  break;

	case 5:
	  answer += "W";
	  break;

	case 6:
	  answer += "X";
	  break;

	case 7:
	  answer += "Y";
	  break;

	case 0:
	  answer += "Z";
	  break;

	}
	
	break;

      }
    }

    cout << answer << endl;
  }

  return 0;
}
