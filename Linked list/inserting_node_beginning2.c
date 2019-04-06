//without global variable

#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node* next;
};
struct Node* insert(struct Node* head2,int x)
{
	struct Node* temp;
	temp=(struct Node*)malloc(sizeof(struct Node*));
	temp->data=x;
	temp->next=head2;
	head2=temp;
	return head2;
}
void show(struct Node* head2)
{
	struct Node* temp=head2;
	while(temp!=NULL)
	{	printf("%d ",temp->data);
		temp=temp->next;
	}printf("\n");
}
int main()
{	
	struct Node* head=NULL;
	int n,i,a;
	printf("\nEnter the no. of elements to be inserted ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("\nEnter the no. ");
		scanf("%d",&a);
		head=insert(head,a);
		show(head);
	}
	return 0;
}
