#include <iostream>

using namespace std;

typedef struct l {

  int a;
  int b;

  bool detected;

} link;


int main() {

  int n,m;
  int a,b;

  bool friends[510];
  bool f_f[510];
  link bond[10001];
  int ans;

  bool flag;


  while(1) {

    cin >> n;

    cin >> m;

    if(n==0 && m==0) break;

    for(int i=0;i<510;i++) {

      friends[i]=false;

      f_f[i]=false;

    }

    friends[1]=true;

    for(int i=0;i<m;i++) {

      cin >> a >> b;

      bond[i].a=a;
      bond[i].b=b;

      bond[i].detected=false;

      if(a==1 || b==1) {

	friends[a]=friends[b]=true;
      
	bond[i].detected=true;

      }

    }

    //for(int i=1;i<=n;i++) cout << friends[i] << " ";

    for(int i=0;i<m;i++) {

      for(int j=1;j<=n;j++) {

	if(friends[j]==true && bond[i].detected==false && (bond[i].a==j || bond[i].b==j)) {

	  f_f[bond[i].a]=f_f[bond[i].b]=true;

	  bond[i].detected=true;

	  break;

	}

      }

    }

    for(int i=1;i<=n;i++) {

      if(f_f[i]==true) friends[i]=true;

    }

    ans=0;

    for(int i=2;i<=n;i++) {

      if(friends[i]==true) ans++;

    }

    cout << ans << endl;
  
  }

  return 0;

}
