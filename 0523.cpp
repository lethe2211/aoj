#include <iostream>
#include <set>

using namespace std;


int main() {

  int n;

  set<int> taro,hanako;
  int stage;
  int winner;
  
  int flag;
  int used[201];


  while(cin >> n,n) {

    taro.clear();

    hanako.clear();

    for(int i=0;i<=200;i++) used[i]=0;

    for(int i=0;i<n;i++) {

      int tmp;

      cin >> tmp;

      used[tmp]=1;

    }

    for(int i=1;i<=2*n;i++) {

      if(used[i]==1) taro.insert(i);

      else hanako.insert(i);

    }

    stage=0;

    while(1) {

      //太郎のターン

      //場にカードがない
      if(stage==0) {

	set<int>::iterator it=taro.begin();

	stage=*it;

	taro.erase(it++);

      }

      //場にカードが出ている
      else {

	set<int>::iterator min=taro.begin();
	
	set<int>::iterator max=taro.end();

	flag=0;

	//カードが出せる
	for(set<int>::iterator it=min;it!=max;it++) {

	  if(stage<*it) {

	    stage=*it;

	    taro.erase(it++);
	      
	    flag=1;

	    break;

	  }

	}

	//カードが出せない
	if(flag==0) stage=0;
    
      }

      if(taro.empty()==true) {

	break;

      }

      //花子のターン

      //場にカードがない
      if(stage==0) {

	set<int>::iterator it=hanako.begin();

	stage=*it;

	hanako.erase(it++);

      }

      //場にカードがある
      else {

	set<int>::iterator min=hanako.begin();

	set<int>::iterator max=hanako.end();
	
	flag=0;

	for(set<int>::iterator it=min;it!=max;it++) {

	    //カードが出せる
	    if(stage<*it) {

	      stage=*it;

	      hanako.erase(it++);

	      flag=1;

	      break;

	    }

	  }

	//カードが出せない
	if(flag==0) stage=0;

      }  

      if(hanako.empty()==true) {

	break;

      }
	
    }

    cout << hanako.size() << endl;

    cout << taro.size() << endl;

  }

  return 0;

}
  
