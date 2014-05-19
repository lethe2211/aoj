#include <stdio.h>
#include <string.h>

int main(void) {

  char c;
  char code[6];

  int size;
  char buf[500];

  int i,j=0;

  
  //encode
  buf[0]='\0';
  
  while((c=getchar())!=EOF) {

    if(c=='\n') break;

    switch(c) {
      
    case ' ':
      strcat(buf,"101");
      break;

    case '\'':
      strcat(buf,"000000");
      break;

    case ',':
      strcat(buf,"000011");
      break;
      
    case '-':
      strcat(buf,"10010001");
      break;
      
    case '.':
      strcat(buf,"010001");
      break;

    case '?':
      strcat(buf,"000001");
      break;
      
    case 'A':
      strcat(buf,"100101");
      break;
      
    case 'B':
      strcat(buf,"10011010");
      break;

    case 'C':
      strcat(buf,"0101");
      break;

    case 'D':
      strcat(buf,"0001");
      break;

    case 'E':
      strcat(buf,"110");
      break;
      
    case 'F':
      strcat(buf,"01001");
      break;
      
    case 'G':
      strcat(buf,"10011011");
      break;
      
    case 'H':
      strcat(buf,"010000");
      break;
      
    case 'I':
      strcat(buf,"0111");
      break;

    case 'J':
      strcat(buf,"10011000");
      break;

    case 'K':
      strcat(buf,"0110");
      break;

    case 'L':
      strcat(buf,"00100");
      break;

    case 'M':
      strcat(buf,"10011001");
      break;

    case 'N':
      strcat(buf,"10011110");
      break;
      
    case 'O':
      strcat(buf,"00101");
      break;
      
    case 'P':
      strcat(buf,"111");
      break;
      
    case 'Q':
      strcat(buf,"10011111");
      break;
      
    case 'R':
      strcat(buf,"1000");
      break;
      
    case 'S':
      strcat(buf,"00110");
      break;

    case 'T':
      strcat(buf,"00111");
      break;

    case 'U':
      strcat(buf,"10011100");
      break;

    case 'V':
      strcat(buf,"10011101");
      break;

    case 'W':
      strcat(buf,"000010");
      break;

    case 'X':
      strcat(buf,"10010010");
      break;

    case 'Y':
      strcat(buf,"10010011");
      break;

    case 'Z':
      strcat(buf,"10010000");
      break;

    }

  }

  //printf("%s\n",buf);

  if((size=strlen(buf)%5)!=0) {

    for(i=0;i<5-size;i++) {

      strcat(buf,"0");

      }

  }

  //printf("%s\n",buf);

  //decode
  for(i=0;i<strlen(buf);i++) {

    code[j]=buf[i];
    j++;

    if(i%5==4) {
      code[5]='\0';
      //printf("%s\n",code);
      j=0;

      if(strcmp(code,"00000")==0) printf("A");

      if(strcmp(code,"00001")==0) printf("B");

      if(strcmp(code,"00010")==0) printf("C");

      if(strcmp(code,"00011")==0) printf("D");

      if(strcmp(code,"00100")==0) printf("E");

      if(strcmp(code,"00101")==0) printf("F");

      if(strcmp(code,"00110")==0) printf("G");

      if(strcmp(code,"00111")==0) printf("H");

      if(strcmp(code,"01000")==0) printf("I");

      if(strcmp(code,"01001")==0) printf("J");

      if(strcmp(code,"01010")==0) printf("K");

      if(strcmp(code,"01011")==0) printf("L");

      if(strcmp(code,"01100")==0) printf("M");

      if(strcmp(code,"01101")==0) printf("N");

      if(strcmp(code,"01110")==0) printf("O");

      if(strcmp(code,"01111")==0) printf("P");

      if(strcmp(code,"10000")==0) printf("Q");

      if(strcmp(code,"10001")==0) printf("R");

      if(strcmp(code,"10010")==0) printf("S");

      if(strcmp(code,"10011")==0) printf("T");

      if(strcmp(code,"10100")==0) printf("U");

      if(strcmp(code,"10101")==0) printf("V");

      if(strcmp(code,"10110")==0) printf("W");

      if(strcmp(code,"10111")==0) printf("X");

      if(strcmp(code,"11000")==0) printf("Y");

      if(strcmp(code,"11001")==0) printf("Z");

      if(strcmp(code,"11010")==0) printf(" ");

      if(strcmp(code,"11011")==0) printf(".");

      if(strcmp(code,"11100")==0) printf(",");

      if(strcmp(code,"11101")==0) printf("-");

      if(strcmp(code,"11110")==0) printf("'");

      if(strcmp(code,"11111")==0) printf("?");

    }

  }

  puts("");


  return 0;

}
