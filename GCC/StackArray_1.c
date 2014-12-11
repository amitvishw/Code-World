#include<stdio.h>
struct Stack
{
	int top;
	int array[100009];
};
void push(struct Stack *s,int data)
{
	if(isFull(*s))
	{
		printf("Stack Overflow\n");
	}
	else
	{	
		s->array[s->top]=data;
		s->top=s->top+1;
	}	
}
void pop(struct Stack *s)
{
	if(isEmpty(*s)==1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		s->top=s->top-1;
	}
}
void display(struct Stack *s)
{
	if(isEmpty(*s)==1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		int i=s->top-1;
		while(i>-1)		
		{
			printf("%d\n",s->array[i]);
			i--;
		}
	}
}
int isFull(struct Stack *s)
{
	if(s->top==100009)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isEmpty(struct Stack *s)
{
	if(s->top==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	struct Stack s;
	int a,c;
	do
	{
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Push\n");
				scanf("%d",&a);
				push(&s,a);
				display(&s);
				break;
			case 2:
				printf("Pop\n");
				pop(&s);
				display(&s);
				break;
			case 3:
				display(&s);
				break;
			default:
				printf("KUCH NHE HAI BHAI\n");
				break;
		}
	}while(c!=4);
	
}
