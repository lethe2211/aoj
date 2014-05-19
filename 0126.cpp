#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {

  int n;
  int map[100];

  int wrong[100];
  int check[10];

  int index;

  cin >> n;

  for(int num=0;num<n;num++) {

    //wrongの初期化
    for(int i=0;i<81;i++) {

      wrong[i]=0;

    }

    //パズルの読み込み
    for(int i=0;i<81;i++) {

      cin >> map[i];

    }

    //タテの列をチェック
    for(int i=0;i<9;i++) {

      for(int j=0;j<9;j++) check[j]=0;

      for(int j=0;j<9;j++) {

	check[map[9*j+i]-1]++;

      }

      for(int j=0;j<9;j++) {

	if(check[j]>1) {

	  for(int k=0;k<9;k++) {

	    if(map[9*k+i]==j+1) wrong[9*k+i]=1;

	  }

	}

      }
    
    }

    //ヨコの列をチェック
    for(int j=0;j<9;j++) {

      for(int i=0;i<9;i++) check[i]=0;

      for(int i=0;i<9;i++) {

	check[map[9*j+i]-1]++;

      }

      for(int i=0;i<9;i++) {

	if(check[i]>1) {

	  for(int k=0;k<9;k++) {

	    if(map[9*j+k]==i+1) wrong[9*j+k]=1;

	  }

	}

      }

    }

    //枠の中をチェック
    for(int i=0;i<3;i++) {

      for(int j=0;j<3;j++) {

	index=27*j+3*i;

	for(int k=0;k<9;k++) check[k]=0;

	for(int k=0;k<3;k++) {

	  for(int l=0;l<3;l++) {

	    check[map[index+9*l+k]-1]++;

	  }

	}

	for(int k=0;k<9;k++) {

	  if(check[k]>1) {

	    for(int l=0;l<3;l++) {

	      for(int m=0;m<3;m++) {

		if(map[index+9*m+l]==k+1) wrong[index+9*m+l]=1;

	      }

	    }

	  }

	}

      }

    }

    for(int j=0;j<9;j++) {

      for(int i=0;i<9;i++) {

	if(wrong[9*j+i]==1) cout << "*";
      
	else cout << " ";

	cout << map[9*j+i];

      }

      cout << endl;

    }

    if(num!=n-1) cout << endl;

  }

  return 0;

}
