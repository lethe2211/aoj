#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

  string buf;
  
  string str;

  map<string,int> word; //map(いわゆる連想配列。各単語をキーとして、その出現回数を保持する)

  string max_frequent_str;
  string max_letters_str;
  int max_frequent;
  int max_letters;

  
  max_letters=0;

  while(cin >> str) {
    
    if(str.length()>max_letters) max_letters=str.length();

    word[str]++; //単語を見つけるたびに、それをキーとするmapを増やしていく

  }
  
  max_frequent=0;

  //mapを探索する時は、イテレータを漸増させていく
  for(map<string,int>::iterator it=word.begin();it!=word.end();it++) {

    //(*it).firstがキーとなる単語、(*it).secondがその出現回数
    if(max_frequent<(*it).second) {

      max_frequent=(*it).second;
      max_frequent_str=(*it).first;

    }

    if((*it).first.length()==max_letters) max_letters_str=(*it).first;

  }

  cout << max_frequent_str << " " << max_letters_str << endl;

  return 0;

}

 
