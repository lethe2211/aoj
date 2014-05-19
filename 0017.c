#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int shift;

  char c;
  char buf[100];
  char* p;

  int i;

  while(fgets(buf,sizeof(buf),stdin)!=NULL) {

    buf[strlen(buf)-1]='\0';
    
    shift=0;
    //printf("%s\n",buf);
    while(1) {
      i=0;
      while(buf[i]!='\0') {

	c=buf[i];
	
	if(c>96 && c<123) c+=shift;
	if(c>122) c-=26;
	printf("%d",c);
	i++;
      }
      printf("%s\n",buf);
      p=strtok(buf," .");
      if(!strcmp(p,"the") || !strcmp(p,"this") || !strcmp(p,"that")) {
	printf("%s\n",buf);
	break;
      }

      while((p=strtok(NULL," ."))!=NULL) {
	  
	if(!strcmp(p,"the") || !strcmp(p,"this") || !strcmp(p,"that")) {
	  printf("%s\n",buf);
	  break;
	}

      }
      
      shift++;

    }	

  }

  return 0;

}
