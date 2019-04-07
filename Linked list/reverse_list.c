#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
}*head;
void insert(int x)
{	struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void show()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{	printf("%d ",temp->data);
		temp=temp->next;
	}printf("\n");
}
void lrev()
{	struct Node* prev=NULL;
	struct Node* curr=head;
	struct Node* nexa;
	while(curr!=NULL)
	{
		nexa=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nexa;
		
	}
	head=prev;
	return;

}
int main()
{	int n,i,a,b;
	printf("\nEnter the no. of elements to be inserted ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("\nEnter the no. ");
		scanf("%d",&a);
		insert(a);
		show();
	}
	lrev();
	show();	
	return 0;
}	
