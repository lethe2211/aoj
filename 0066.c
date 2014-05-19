#include <stdio.h>

int main(void) {

  char buf[20];
  char c;

  int i;

  
  while(fgets(buf,sizeof(buf),stdin)!=NULL) {

    if((buf[0]=='o' && buf[1]=='o' && buf[2]=='o') || (buf[3]=='o' && buf[4]=='o' && buf[5]=='o') || (buf[6]=='o' && buf[7]=='o' && buf[8]=='o') || (buf[0]=='o' && buf[3]=='o' && buf[6]=='o') || (buf[1]=='o' && buf[4]=='o' && buf[7]=='o') || (buf[2]=='o' && buf[5]=='o' && buf[8]=='o') || (buf[0]=='o' && buf[4]=='o' && buf[8]=='o') || (buf[2]=='o' && buf[4]=='o' && buf[6]=='o')) printf("o\n");

    else if((buf[0]=='x' && buf[1]=='x' && buf[2]=='x') || (buf[3]=='x' && buf[4]=='x' && buf[5]=='x') || (buf[6]=='x' && buf[7]=='x' && buf[8]=='x') || (buf[0]=='x' && buf[3]=='x' && buf[6]=='x') || (buf[1]=='x' && buf[4]=='x' && buf[7]=='x') || (buf[2]=='x' && buf[5]=='x' && buf[8]=='x') || (buf[0]=='x' && buf[4]=='x' && buf[8]=='x') || (buf[2]=='x' && buf[4]=='x' && buf[6]=='x')) printf("x\n");
  
    else printf("d\n");

  }

  return 0;

}
