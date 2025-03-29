#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char stack[100];
int top=-1;
int push(char e)
{
    stack[++top] = e;
    return 0;
}

int pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x=='(')
        return 0;
    if(x=='+' || x=='-')
        return 1;
    if(x=='*' || x=='/')
        return 2;
}

int main()
{
    char infix[100];
    char ch,x;
    int i;
    printf("Enter the infix exp :\n");
    gets(infix);
    for(i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        if(isalnum(ch))
            printf("%c ",ch);
        else if (ch == '(')
                push(ch);
            else if (ch == ')')
            {
                while((x = pop()) != '(')
                printf("%c ",x);
            }
            else
            {
                while(priority(stack[top]) >= priority(ch))
                    printf("%c ",pop());
                push(ch);
            }
    }
    while(top != -1)
    {
        printf("%c ",pop());
    }
    return 0;
}
