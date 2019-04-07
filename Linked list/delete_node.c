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
void delete(int pos)
{	struct Node* temp=head;
	struct Node* temp2=(struct Node*)malloc(sizeof(struct Node*));
	int i;
	if(pos==1)
	{	head=temp->next;
		free(temp);
	}
	for(i=0;i<pos-1;i++)
	{	temp2=temp->next;
		if(i==pos-2)
		{	temp->next=temp2->next;
			temp2->next=NULL;
			free(temp2);
		}
		temp=temp->next;
	}
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
	printf("\nEnter the position of deletion ");
	scanf("%d",&b);
	if(b<=0||b>n)
	{printf("Error\n");
	exit(0);}
	delete(b);
	show();	
	return 0;
}	
