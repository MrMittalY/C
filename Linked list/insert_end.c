#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node* next;
}*head;
void insert(int x)
{	struct Node* temp=head;
	struct Node* temp2=(struct Node*)malloc(sizeof(struct Node*));
	temp2->data=x;
	if(head==NULL)
	{	temp2->next=NULL;
		head=temp2;
	}
	else 
	{	while(temp->next!=NULL)
	{temp=temp->next;
	}
	temp2->next=NULL;
	temp->next=temp2;
	}
}
void show()
{	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}printf("\n");
}
int main()
{
	int n,i,a,b,m;
	printf("\nEnter the no. of elements to be inserted ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("\nEnter the no. ");
		scanf("%d",&a);
		insert(a);
		show();
	}
	return 0;
}
