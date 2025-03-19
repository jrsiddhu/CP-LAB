#include<stdio.h>
#include<stdlib.h>
#define max 5

int stack[max];
int top=-1;

int push(int e)
{
	if(top==(max-1))
	{
		printf("\nStack is overflow");
	}
	else
	{
		top=top+1;
		stack[top]=e;
		printf("Inserted element : %d\n",stack[top]);
	}
	return 0;
}

int pop()
{
	if(top==-1)
	{
		printf("\nStack is underflow");
	}
	else
	{
		printf("\nDeleted element : %d",stack[top]);
		top=top-1;
	}
	return 0;
}

int display()
{
	if(top==-1)
	{
		printf("\nStack is EMPTY");
	}
	else
	{
		for(int i=top;i>-1;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
	return 0;
}

int main()
{
	int ch,e;
	while(1)
	{
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.exit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nEnter an element to insert : ");
			scanf("%d",&e);
			push(e);
			break;
			
			case 2:
			pop();
			break;
			
			case 3:
			display();
			break;
			
			case 4:
			exit(0);
			break;
			
			default :
			printf("\nInvalid Choice");
			break;
		}
	}
	return 0;
}
