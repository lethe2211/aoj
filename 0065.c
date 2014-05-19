#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int count;

  typedef struct {

    int id;
    int month;
    int day;

  } dealing;

  dealing deal[2000];
  int idx;
  
  int calculated[2000];
  int idx2;

  int flag;
  char* p;
  char buf[50];

  dealing temp;
  int i,j,k;

  idx=0;

  while(1) {

    fgets(buf,sizeof(buf),stdin);

    buf[strlen(buf)-1]='\0';

    if(buf[0]=='\0') break;

    p=strtok(buf,",");
    deal[idx].id=atoi(p);

    p=strtok(NULL,",");
    deal[idx].day=atoi(p);

    deal[idx].month=0;

    idx++;

  }
 
  while(fgets(buf,sizeof(buf),stdin)!=NULL) {

    buf[strlen(buf)-1]='\0';

    p=strtok(buf,",");
    deal[idx].id=atoi(p);
   
    p=strtok(NULL,",");
    deal[idx].day=atoi(p);

    deal[idx].month=1;

    idx++;

  }

  for(i=0;i<idx-1;i++) {

    for(j=i+1;j<idx-i;j++) {

      if(deal[i].id>deal[j].id) {

	temp=deal[i];
	deal[i]=deal[j];
	deal[j]=temp;

      }

    }

  }

  idx2=0;

  for(i=0;i<idx;i++) {

    flag=0;

    for(j=0;j<idx2;j++) {

      if(calculated[j]==deal[i].id) goto Next;

    }

    calculated[idx2]=deal[i].id;
    idx2++;

    count=0;

    for(k=i;k<idx;k++) {

      if(deal[i].id==deal[k].id) {

	if(deal[k].month==0) flag=1;

	if(flag==1 && deal[k].month==1) flag=2;

	count++;

      }

    }

  Next:
    if(flag==2) printf("%d %d\n",deal[i].id,count);

  }
    
  return 0;

}

    
  
  

  
