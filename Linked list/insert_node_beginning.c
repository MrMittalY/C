//with global variable
#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node* next;
};
struct Node* head;
void insert(int x)
{
	struct Node* temp;
	temp=(struct Node*)malloc(sizeof(struct Node*));
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
int main()
{	int n,i,a;
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
