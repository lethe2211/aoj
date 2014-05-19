#include <iostream>

using namespace std;

int main() {

  int p[8];
  int c[8];

  int temp[8]={4,1,4,1,2,1,2,1};
  int men[8];
  int min_men;
  int ans[8];
  long int v[8];
  long int v_men;

  int idx;
  int answer;

  while(cin >> p[0] >> p[1] >> p[2] >> p[3] >> p[4] >> p[5] >> p[6] >> p[7]) {

    for(int i=0;i<8;i++) {

      for(int j=0;j<8;j++) {

	c[(j+i)%8]=temp[j];

      }

      men[i]=0;

      for(int j=0;j<8;j++) {

	men[i]+=max((p[j]-c[j]),0);

      }

      //for(int j=0;j<8;j++) cout << c[j] << " ";

      //cout << endl;

    }
    
    min_men=100000;
    
    for(int j=0;j<8;j++) {

      min_men=min(men[j],min_men);

    }

    idx=0;
    
    for(int j=0;j<8;j++) ans[j]=-1;

    for(int j=0;j<8;j++) {

      if(men[j]==min_men) {

	ans[idx]=j;
	
	idx++;

      }

    }
    //for(int j=0;j<idx;j++) cout << ans[j] << " ";
    //cout << endl;
    for(int j=0;j<8;j++) v[j]=100000000;
      
    for(int j=0;j<8;j++) {

      for(int k=0;k<idx;k++) {

	if(j==ans[k]) {

	  v[j]=10000000*temp[(j+0)%8]+1000000*temp[(j+1)%8]+100000*temp[(j+2)%8]+10000*temp[(j+3)%8]+1000*temp[(j+4)%8]+100*temp[(j+5)%8]+10*temp[(j+6)%8]+temp[(j+7)%8];

	}

      }

    }
    //for(int j=0;j<8;j++) cout << v[j] << " ";
    //cout << endl;
    v_men=100000000;
    
    for(int j=0;j<8;j++) {

      if(v_men>v[j]) {

	v_men=v[j];
	answer=j;
	//cout << v_men << " " << j << endl;
      }

    }

    //cout << answer << endl;

    //for(int i=0;i<8;i++) cout << temp[i] << " ";
    //cout << endl;
      
    for(int i=0;i<8;i++) {

      c[(i+answer)%8]=temp[i];

    }

    for(int i=0;i<8;i++) {

      if(i==0) cout << c[i];

      else cout << " " << c[i];

    }
    
    cout << endl;
    
  }

  return 0;
    
}
