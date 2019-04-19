#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* prev;
	struct Node* next;
}*head;
struct Node* GetNewNode(int x)
{
	struct Node* myNode;
	myNode=(struct Node*)malloc(sizeof(struct Node*));
	myNode->data=x;
	myNode->prev=NULL;
	myNode->next=NULL;
	return myNode;
}
void InsertAtHead(int x)
{
	
	struct Node* temp=GetNewNode(x);
	if(head==NULL)
	{
		head=temp;
		return;
	}
	head->prev=temp;
	temp->next=head;
	head=temp;
}
void InsertAtTail(int x)
{
	
	struct Node* temp=head;
	struct Node* temp2=GetNewNode(x);
	if(head==NULL)
	{
		head=temp2;
		return;
	}
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=temp2;
	temp2->prev=temp;
}
void print_fwd()
{	printf("Forward Doubly Linked List: ");
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void print_rev()
{	printf("Reversed Doubly Linked List: ");
	struct Node* temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->prev;
	}	
	printf("\n");
}
void menu()
{
	printf("\nMENU\n1. InsertAtTail\n2. InsertAtHead\n3. Print Forward\n4. Print Reversed\n5. Quit\n");
}
int main()
{	int ch;
	do
	{	menu();
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:	{
						int n,i,x;
						printf("How many No's to enter ");
						scanf("%d",&n);
						for(i=0;i<n;i++)
						{	printf("Enter element %d ",i+1);
							scanf("%d",&x);
							InsertAtTail(x);
						}
					}
					break;
			case 2:	{
						int n,i,x;
						printf("How many No's to enter ");
						scanf("%d",&n);
						for(i=0;i<n;i++)
						{	printf("Enter element %d ",i+1);
							scanf("%d",&x);
							InsertAtHead(x);
						}
					}
					break;
			case 3:	print_fwd();
					break;
			case 4:	print_rev();
					break;

			default:return 0;break;
		}
	}
	while(ch!=5);
	return 0;
}