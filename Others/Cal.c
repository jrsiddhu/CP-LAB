#include <stdio.h>
int main() { 
int a,b,op; 
printf("Enter Two Numbers = ");
scanf("%d%d",&a,&b); 
printf("Select an option\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n"); 
scanf("%d",&op);
switch (op){ 
case 1: 
printf("Add = %d",a+b); 
break; 
case 2: 
printf("Sub = %d",a-b);
break; 
case 3: 
printf("Multiply = %d",a*b ); 
break;
case 4: 
printf("Division = %d",a/b ); 
break;
case 5: 
printf("Mod = %d",a%b); 
break; 
default: 
printf("Invalid"); 
break; }
}
