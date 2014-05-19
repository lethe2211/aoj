#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
  
  int i=1,x;
  char buf[1000];

  while(fgets(buf,sizeof(buf),stdin)!=NULL) {
    buf[strlen(buf)-1]='\0';
    x=atoi(buf); //for each data(important!)
    if(x==0) break; 
    cout << "Case " << i++ << ": " << x << "\n"; //You should output it.
  }
 

  return 0;
}

