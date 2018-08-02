#include <stdio.h>

void push(int Stack[],int size,int *top,int x)
{
	if(*top==size-1)
		printf("Overflow");
	else
		Stack[++*top]=x;
    return; }

int pop(int Stack[], int *top)
{
	if(*top==-1)
		printf("Underflow");
	else
		return Stack[(*top)--];
	return 0; }

void main()
{
	int Stack[6]={1,2};
	int size=6;
	int top=1;

    push(Stack,size,&top,4);
	push(Stack,size,&top,12);
	push(Stack,size,&top,9);
	push(Stack,size,&top,21);
	printf(" %d popped\n",pop(Stack,&top));
	printf(" %d popped\n",pop(Stack,&top));
	printf(" %d popped\n",pop(Stack,&top));
	printf(" %d popped\n",pop(Stack,&top));
	printf(" %d popped\n",pop(Stack,&top));
	printf(" %d popped\n",pop(Stack,&top)); }
