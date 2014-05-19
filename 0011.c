#include <stdio.h>

void swap(int* a,int* b);

int main(void) {

  int w,n;
  int seq[50];
  int a,b;
  int i;
  
  scanf("%d",&w);

  for(i=0;i<w;i++) {
    seq[i]=i+1;
  }
  
  scanf("%d",&n);

  for(i=0;i<n;i++) {
    scanf("%d,%d",&a,&b);
    swap(&seq[a-1],&seq[b-1]);
  }

  for(i=0;i<w;i++) {
    printf("%d\n",seq[i]);
  }

  return 0;
}

void swap(int* a,int* b) {
  int temp;

  temp=*a;
  *a=*b;
  *b=temp;
}

