#include<stdio.h>
int main () {
  int i,f,n;
  scanf("%d",&i);
  n=1;
  for(f=1;f<=i;f++){
    n=n*f;
  }
  printf("%d! = %d",i,n);
}
