#include <stdio.h>
#include <string.h>

int main(void) {

  char str[1000];
  int i;

  fgets(str,sizeof(str),stdin);

  str[strlen(str)-1]='\0';

  for(i=0;i<strlen(str);i++) {

    if(str[i]>=97 && str[i]<=122) str[i]=str[i]-32;
     
  }

  printf("%s\n",str);

  return 0;

}

