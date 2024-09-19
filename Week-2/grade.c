#include<stdio.h>
int main() {
float m;
printf("Enter Marks -> ");
scanf("%f",&m);
if(m>90 && m<=100)
printf("A+\n");
else if(m>80 && m<=90)
printf("A\n");
else if(m>70 && m<=80)
printf("B\n");
else if(m>60 && m<=70)
printf("C\n");
else if(m>50 && m<=60)
printf("D\n");
else if(m>40 && m<=50)
printf("E\n");
else if(m>0 && m<=40)
printf("FAIL\n");
}
