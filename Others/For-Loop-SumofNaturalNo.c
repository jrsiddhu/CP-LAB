#include <stdio.h>
int main() {
   int i,n,sum; 
          printf("No of Natural Numbers = ");
                scanf("%d",&n);
            sum=0; 
                      for(i=1;i<=n;i++) {
                                  sum=sum+i;     }
          printf("Sum of first %d Natural Numbers = %d",n,sum);
}
