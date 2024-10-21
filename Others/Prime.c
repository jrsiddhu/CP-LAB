#include <stdio.h>
int main() { 
  int n,i,f=0;
  printf("Enter A Number = "); 
  scanf("%d",&n); 
  for(i=1;i<=n;i++){ 
    if(n%i==0)
      f++;}
    if(f==2) 
      printf("Prime Number");
  else
    printf("Not A Prime Number"); 
}
