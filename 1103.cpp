#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

vector<string> split(const string &str, char delim){
  vector<string> res;
  size_t current = 0, found;
  while((found = str.find_first_of(delim, current)) != string::npos){
    res.push_back(string(str, current, found - current));
    current = found + 1;
  }
  res.push_back(string(str, current, str.size() - current));
  return res;
}

vector<int> dx, dy;

int dfs(int x, int y, bool used[4][4]) {

  int result = 0;
  int new_x, new_y;

  // cout << x << " " << y << endl;
  // for(int i = 0;i < 4;i++) {

  //   for(int j = 0;j < 4;j++) {

  //     cout << used[j][i];
  //   }

  //   cout << endl;

  // }

  // cout << endl;
  
  while(used[x][y] == true) {

    x++;

    if(x == 4) {

      y++;
      x = 0;
      
      if(y == 4) {

	return 1;

      }

    }

  }

  used[x][y] = true;

  for(int i = 0;i < 4;i++) {

    new_x = x + dx[i];
    new_y = y + dy[i];

    if(new_x >= 0 && new_x <= 3 && new_y >= 0 && new_y <= 3 && (used[new_x][new_y] == false)) {

      used[new_x][new_y] = true;

      // cout << dx[i] << "," << dy[i] << endl;
      // for(int i = 0;i < 4;i++) {

      // 	for(int j = 0;j < 4;j++) {

      // 	  cout << used[j][i];
      // 	}

      // 	cout << endl;

      // }
      // cout << endl;
      if(x == 3) result += dfs(0, y+1, used);
      else result += dfs(x+1, y, used);
      used[new_x][new_y] = false;
	
    }
    
  }

  used[x][y] = false;

  return result;
  
}

int solve() {

  bool used[4][4];

  for(int i = 0;i < 4;i++) {

    for(int j = 0;j < 4;j++) {

      used[j][i] = false;

    }

  }
  
  return dfs(0, 0, used);

}

int main() {

  string line;
  vector<string> strarray;

  while(getline(cin, line)) {
    
    if(line.length() == 1 && atoi(line.c_str()) > 4) break;

    else {

      dx.clear();
      dy.clear();

      strarray = split(line, ' ');

      for(int i = 0;i < 8;i++) {

      	if(i % 2 == 0) dx.push_back(atoi(strarray[i].c_str()));

      	else dy.push_back(atoi(strarray[i].c_str()));

      }

      cout << solve() << endl;
      
    }

  }
  
  return 0;

}
