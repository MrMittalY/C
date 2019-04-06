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
void insertn(int m,int b)
{	int i;
	struct Node* temp=head;
	struct Node* temp2;
	temp2=(struct Node*)malloc(sizeof(struct Node*));
	temp2->data=m;
	if(b==1)
		{
			temp2->next=head;
			head=temp2;
		}
	for(i=0;i<b-2;i++)
	{		
		temp=temp->next;
	}
	if(i==(b-2))
		{	
			temp2->next=temp->next;
			temp->next=temp2;
		}
}
	
int main()
{	int n,i,a,b,m;
	printf("\nEnter the no. of elements to be inserted ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("\nEnter the no. ");
		scanf("%d",&a);
		insert(a);
		show();
	}
	printf("\nEnter the no to be inserted ");
	scanf("%d",&m);
	printf("\nEnter the position at which it should be inserted ");
	scanf("%d",&b);
	if(b<=0||b>n+1)
	{printf("Error\n");
	exit(0);}
	printf("\n");
	insertn(m,b);
	show();
return 0;
}
