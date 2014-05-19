#include <iostream>
#include <cstring>

using namespace std;


int n,s;

bool used[10];
int count;

void dfs(int size,int depth,int sum) {

  if(size==depth || sum==s) {

    count++;

    return;

  }

  for(int i=0;i<10;i++) {

    if(used[i]==false) {

      used[i]=true;

      dfs(size,depth+1,sum-depth*i);

      used[i]=false;

    }

  }

}

int main() {

  while(cin >> n >> s) {

    count=0;

    memset(used,0,sizeof(used));

    dfs(n,0,s);

    cout << count << endl;

  }

  return 0;

}
