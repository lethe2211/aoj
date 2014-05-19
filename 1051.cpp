#include <iostream>
#include <vector>

using namespace std;


int main() {

  int n;
  vector<int> pages;

  int count;
  int flag;
  int temp;
  vector<int> pair;


  while(cin >> n) {

    if(n==0) break;

    pages.clear();

    pair.clear();

    for(int i=0;i<n;i++) {

      cin >> temp;

      pages.push_back(temp);

    }

    count=0;
    flag=0;
    
    for(int i=0;i<=pages.size();i++) {

      if(i==0) {

	pair.push_back(pages[i]);

	count++;

      }

      else if(i==pages.size()) {

	if(flag==0) {

	  if(count==1) cout << pair[0];
	  
	  else cout << pair[0] << "-" << pair[pair.size()-1];

	  flag=1;

	}

	else {

	  if(count==1) cout << " " << pair[0];

	  else cout << " " << pair[0] << "-" << pair[pair.size()-1];

	}

      }

      else if(pages[i]==pages[i-1]+1) {

	pair.push_back(pages[i]);

	count++;

      }

      else {

	if(flag==0) {

	  if(count==1) cout << pair[0];

	  else cout << pair[0] << "-" << pair[pair.size()-1];

	  flag=1;

	}

	else {

	  if(count==1) cout << " " << pair[0];

	  else cout << " " << pair[0] << "-" << pair[pair.size()-1];

	}

	pair.clear();

	pair.push_back(pages[i]);

	count=1;

      }

    }

    cout << endl;

  }

  return 0;

}
