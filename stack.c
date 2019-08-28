#include<stdio.h>
#include<stdlib.h>
#define max 10
int stack[max];
int top=-1;
void push()
{
	int item;
	if(top==max-1)
	printf("\nSTACK OVERFLOW");
	else
	{
		printf("\nEnter item:");
		scanf("%d",&item);
		top++;
		stack[top]=item;
	}
}
void pop()
{
	if(top==-1)
	printf("\nSTACK UNDERFLOW");
	else
	top--;
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	printf("\n%d",stack[i]);
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default: "Inavlid input";
		}
	}
}

