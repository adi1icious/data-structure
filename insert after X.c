#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int  data;
	struct Node* next; };

void InsertAfterX(struct node* S, int X, int Y)
{
	struct Node* N=(struct Node*)(malloc(sizeof(struct Node)));
	if(N==NULL)
		printf("Failed to Allocate Memory");
	else{
		N->data=Y;
	 	while(S->data!=X)
	 		S=S->next;
	 	N->next=S->next;
	 	S->next=N; }
}
