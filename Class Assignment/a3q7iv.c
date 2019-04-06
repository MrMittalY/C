#include<stdio.h>
void main()
{int i,j,n;
printf("Enter the no. of rows: ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{printf("\n");
for(j=0;(i+j)<=n;j++)
{printf("%d ",j+1);
}
}
printf("\n");}

