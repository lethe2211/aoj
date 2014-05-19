#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> hand;

  int rock,scissors,paper;


  while(1) {

    int temp;

    cin >> temp;

    hand.clear();

    hand.push_back(temp);

    if(hand[0]==0) break;

    for(int i=1;i<5;i++) {

      cin >> temp;
      hand.push_back(temp);

    }

    rock=scissors=paper=0;

    for(int i=0;i<5;i++) {

      if(hand[i]==1) rock=1;

      if(hand[i]==2) scissors=1;

      if(hand[i]==3) paper=1;

    }

    if(rock==1 && scissors==1 && paper==1) {

      for(int i=0;i<5;i++) cout << "3" << endl;

    }

    else if(rock==1 && scissors==1) {

      for(int i=0;i<5;i++) {

	if(hand[i]==1) cout << "1" << endl;

	else if(hand[i]==2) cout << "2" << endl;

      }

    }

    else if(scissors==1 && paper==1) {

      for(int i=0;i<5;i++) {

	if(hand[i]==2) cout << "1" << endl;

	else if(hand[i]==3) cout << "2" << endl;

      }

    }

    else if(paper==1 && rock==1) {

      for(int i=0;i<5;i++) {

	if(hand[i]==3) cout << "1" << endl;

	else if(hand[i]==1) cout << "2" << endl;

      }

    }

    else if(rock==1) {

      for(int i=0;i<5;i++) cout << "3" << endl;

    }

    else if(scissors==1) {

      for(int i=0;i<5;i++) cout << "3" << endl;

    }

    else if(paper==1) {

      for(int i=0;i<5;i++) cout << "3" << endl;

    }

    else cout << "error!" << endl;

  }

  return 0;

}
