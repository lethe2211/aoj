#include <stdio.h>
#include <string.h>

int main(void) {

  char str[1200];

  char* word[1200];
  int idx;

  char* checked[1201];
  int idx2;

  char* p;
  int count,maxcount;

  int i,j;

  
  fgets(str,sizeof(str),stdin);

  str[strlen(str)-1]='\0';

  p=strtok(str," ");
  word[0]=p;

  idx=1;

  while((p=strtok(NULL," "))!=NULL) {

      word[idx]=p;

      idx++;

  }

  idx2=0;
  maxcount=0;
  checked[0]="";
  
  for(i=0;i<idx;i++) {
    
    for(j=0;j<idx2;j++) {

      if(strcmp(word[i],checked[j])==0) goto Next;

    }
    
    strcpy(checked[idx2],word[i]);
    
    idx2++;

    count=0;
    
    for(j=i;j<idx;j++) {

      if(strcmp(word[i],word[j])==0) count++;

    }
    
    //Next:
    //if(maxcount<count) maxcount=count;
    
  }
    
  printf("%d\n",maxcount);

  return 0;

}

    
