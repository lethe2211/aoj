#include <stdio.h>

int main(void) {

  int hand[5];
  
  int rest[2];

  int flag;
  int temp;
  int i,j,k,l,m=0;

  char c;

  scanf("%d,%d,%d,%d,%d",&hand[0],&hand[1],&hand[2],&hand[3],&hand[4]);
  
  //最初にソートしとけば・・・
  //four card?
  for(i=0;i<5;i++) {
    flag=1;
    for(j=0;j<5;j++) {
      for(k=0;k<5;k++) {
	if(j==i || k==i || j==k) continue;
	else if(hand[j]!=hand[k]) flag=0;
      }
    }
    if(flag==1) break;
  }

  if(flag==1) {
    printf("four card\n");
    return 0;
  }

  //either three card or full house?
  flag=0;

  for(i=0;i<3;i++) {
    for(j=i+1;j<4;j++) {
      for(k=j+1;k<5;k++) {
	if(hand[i]==hand[j] && hand[i]==hand[k]) {
	  flag=1;
	  goto Three;
	}
      }
    }
  }

  //judge three card or full house
 Three:
  if(flag==1) {
    for(l=0;l<5;l++) {
      if(l!=i && l!=j && l!=k) {
	rest[m]=hand[l];
	m++;
      }
    }

    if(rest[0]==rest[1]) {
      printf("full house\n");
      return 0;
    }

    else {
      printf("three cards\n");
      return 0;
    }

  }

  //straight?
  for(i=0;i<4;i++) {
    for(j=i+1;j<5;j++) {
      if(hand[j]>hand[j+1]) {
	temp=hand[j];
	hand[j]=hand[j+1];
	hand[j+1]=hand[j];
      }
    }
  }
  for(i=0;i<5;i++) printf("%d ",hand[i]);
  flag=1;

  for(i=0;i<4;i++) {
    if(hand[i]+1!=hand[i+1]) flag=0; 
  }

  if(flag==1) {
    printf("straight\n");
    return 0;
  }

  //two pair or one pair

  return 0;

}
