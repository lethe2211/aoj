#include <stdio.h>
#include <string.h>

int main(void) {

  int num;
  char buf[150];
  int i,j;
  
  while(fgets(buf,sizeof(buf),stdin)!=NULL) {

    buf[strlen(buf)-1]='\0';
    
    for(i=0;i<strlen(buf);i++) {
     
      if(i<strlen(buf)-2 && buf[i]=='@') {
	num=buf[i+1]-'0';
	
	for(j=0;j<num;j++) printf("%c",buf[i+2]);
	i=i+2;
      }
      else printf("%c",buf[i]);
    }

    printf("\n");
  }

  return 0;
}

