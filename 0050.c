#include <stdio.h>
#include <string.h>

int main(void) {

  char str[1200];
  char temp[10];

  int i,j,flag;

  fgets(str,sizeof(str),stdin);

  str[strlen(str)-1]='\0';

  for(i=0;i<strlen(str)-4;i++) {

    flag=0;

    if((i==0 || str[i-1]==' ') && str[i]=='a' && str[i+1]=='p' && str[i+2]=='p' && str[i+3]=='l' && str[i+4]=='e' && (str[i+5]=='.' || str[i+5]==' ' || str[i+5]=='\0')) {

      temp[0]='p';
      temp[1]='e';
      temp[2]='a';
      temp[3]='c';
      temp[4]='h';

      flag=1;

    }

    if((i==0 || str[i-1]==' ') && str[i]=='p' && str[i+1]=='e' && str[i+2]=='a' && str[i+3]=='c' && str[i+4]=='h' && (str[i+5]=='.' || str[i+5]==' ' || str[i+5]=='\0')) {

      temp[0]='a';
      temp[1]='p';
      temp[2]='p';
      temp[3]='l';
      temp[4]='e';

      flag=1;

    }

    if(flag==1) {

      for(j=0;j<5;j++) str[i+j]=temp[j];

    }

  }
  
  printf("%s\n",str);

  return 0;

}

