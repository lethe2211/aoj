#include <stdio.h>

int add_and_take_units_digit(int left,int right) {

  return (left+right)%10;

}


int main(void) {

  int pyramid[10][10];

  char buf[20];

  int i,j;


  while(fgets(buf,sizeof(buf),stdin)!=NULL) {

    for(i=0;i<10;i++) pyramid[0][i]=(int)(buf[i]-'0');

    //for(i=0;i<10;i++) printf("%d ",init[i]);

    for(i=0;i<9;i++) {

      for(j=0;j<9-i;j++) {

	pyramid[i+1][j]=add_and_take_units_digit(pyramid[i][j],pyramid[i][j+1]);
	
      }

    }

    printf("%d\n",pyramid[9][0]);

  }

  return 0;

}
