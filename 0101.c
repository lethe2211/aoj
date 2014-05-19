#include <stdio.h>
#include <string.h>

int main(void) {

  int n;
  char word[1200];

  char buf[1200];

  char* p;
  char c;
  int i;
  
  scanf("%d",&n);
  c=getchar();

  for(i=0;i<n;i++) {

    fgets(buf,sizeof(buf),stdin);

    buf[strlen(buf)-1]='\0';

    word[0]='\0';

    p=strtok(buf," ");
    if(strcmp(p,"Hoshino")==0) {
      strcat(word,"Hoshina");
    }
    else {
      strcat(word,p);
    }

    while((p=strtok(NULL," "))!=NULL) {
      if(strcmp(p,"Hoshino")==0) {
	strcat(word," Hoshina");
      }
      else {
	strcat(word," ");
	strcat(word,p);
      }
    }

    printf("%s\n",word);

  }

  return 0;

}
