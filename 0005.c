#include <stdio.h>

long gcd(int a,int b);
long lcm(int a,int b,int n);

int main(void) {

  int a,b;
  
  while(scanf("%d %d",&a,&b)!=EOF) {

    printf("%ld %ld\n",gcd(a,b),lcm(a,b,gcd(a,b)));

  }

  return 0;

}

long gcd(int a,int b) {

  int temp;

  if(a<b) {
    temp=a;
    a=b;
    b=temp;
  }

  if(b==0) return a;

  else return gcd(b,a%b);

}

long lcm(int a,int b,int n) {

  return a/n*b;

}
