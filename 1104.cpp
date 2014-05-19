#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main() {

  int m, n;

  while(cin >> m >> n) {

    if(m == 0 || n == 0) break;
  
    int x = 1;
    int y = 1;

    string command;
    int offset;

    int direction = 0;
    
    while(cin >> command) {

      if(command == "STOP") {

	cout << x << " " << y << endl;
	break;

      }

      if(command == "LEFT") {

	direction += 1;
	direction %= 4;

      }

      if(command == "RIGHT") {

	direction -= 1;
	if(direction == -1) direction = 3;
	direction %= 4;

      }

      if(command == "FORWARD") {

	cin >> offset;
	
	switch(direction) {

	case 0:
	  if(y + offset > n) y = n;

	  else y += offset;

	  break;

	case 1:
	  if(x - offset < 1) x = 1;

	  else x -= offset;

	  break;

	case 2:
	  if(y - offset < 1) y = 1;

	  else y -= offset;

	  break;

	case 3:
	  if(x + offset > m) x = m;

	  else x += offset;

	  break;

	}

      }

      if(command == "BACKWARD") {

	cin >> offset;
	
	switch(direction) {

	case 0:
	  if(y - offset < 1) y = 1;

	  else y -= offset;

	  break;

	case 1:
	  if(x + offset > m) x = m;

	  else x += offset;

	  break;

	case 2:
	  if(y + offset > n) y = n;

	  else y += offset;

	  break;

	case 3:
	  if(x - offset < 1) x = 1;

	  else x -= offset;

	  break;

	}
	
      }

      //cout << x << " " << y << " " << direction << endl;

    }
  }
  
  
  return 0;

}
