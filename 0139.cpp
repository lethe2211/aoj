#include <iostream>
#include <string>

using namespace std;


int main() {

  int n;
  string snake;

  int idx;

  int count;


  cin >> n;

  getline(cin,snake);

  for(int i=0;i<n;i++) {

    getline(cin,snake);

    //明らかにどちらのヘビでもない
    if(snake[0]!='>') {

      cout << "NA" << endl;

      break;

    }

    else {

      //A種であるか判定
      if(snake[1]=='\'') {

	if(snake[2]!='=') {

	  cout << "NA" << endl;

	  goto NA;

	}

	idx=3;

	count=1;

	while(1) {

	  if(snake[idx]!='=' && snake[idx]!='#') {
	    
	    cout << "NA" << endl;

	    goto NA;

	  }

	  else if(snake[idx]=='=') {

	    idx++;
	    
	    count++;

	  }

	  else if(snake[idx]=='#') {

	    idx++;

	    break;

	  }

	}

	while(1) {

	  if(snake[idx]!='=' && snake[idx]!='~') {
	  
	    cout << "NA" << endl;

	    goto NA;

	  }

	  else if(snake[idx]=='=') {

	    idx++;

	    count--;

	  }

	  else if(snake[idx]=='~' && idx==snake.length()-1) {

	    if(count==0) break;

	    else {
	      
	      cout << "NA" << endl;

	      goto NA;

	    }
	      
	  }

	  else {

	    cout << "NA" << endl;

	    goto NA;

	  }

	}

	cout << "A" << endl;

      }

      //B種であるか判定
      else if(snake[1]=='^') {

	if(snake[2]!='Q') {

	  cout << "NA" << endl;

	  goto NA;p

	}

	if(snake[3]!='=') {

	  cout << "NA" << endl;

	  goto NA;

	}

	idx=4;

	while(1) {

	  if(snake[idx]!='Q') break;

	  idx++;

	  if(snake[idx]!='=') {

	    cout << "NA" << endl;

	    goto NA;

	  }

	  idx++;

	}

	if((snake[idx]!='~' || snake[idx+1]!='~') || snake.length()>idx+2) {

	  cout << "NA" << endl;

	  goto NA;

	}

	cout << "B" << endl;

      }

      else {

	cout << "NA" << endl;

	goto NA;

      }

    }

  NA:
    ;

  }

  return 0;

}
