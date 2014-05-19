#include <stdio.h>
#include <string.h>

int main(void) {
  
  char str[30];
  int i;

  fgets(str,sizeof(str),stdin);

  str[strlen(str)-1]='\0';

  for(i=0;i<strlen(str);i++) {
    printf("%c",str[strlen(str)-i-1]);
  }

  printf("\n");

  return 0;

}

