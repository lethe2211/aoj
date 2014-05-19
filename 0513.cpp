#include <iostream>
#include <vector>

using namespace std;


int main() {

  int n,m;
  int k;

  vector<int> card;
  
  vector<int> temp1,temp2;


  cin >> n;

  card.clear();

  for(int i=0;i<2*n;i++) card.push_back(i+1);

  cin >> m;

  for(int i=0;i<m;i++) {

    temp1.clear();

    temp2.clear();

    cin >> k;

    if(k==0) {

      for(int j=0;j<n;j++) {

	temp1.push_back(card[j]);

	temp2.push_back(card[n+j]);

      }

      for(int j=0;j<n;j++) {

	card[2*j]=temp1[j];

	card[2*j+1]=temp2[j];

      }

    }

    else {

      for(int j=0;j<2*n;j++) {

	if(j<k) temp1.push_back(card[j]);

	else temp2.push_back(card[j]);

      }

      for(int j=0;j<2*n;j++) {

	if(j<2*n-k) card[j]=temp2[j];

	else card[j]=temp1[j-2*n+k];

      }

    }

  }

  for(int i=0;i<2*n;i++) cout << card[i] << endl;

  return 0;

}
