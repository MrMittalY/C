#include<stdio.h>
void main()
{int product=1,i,n;
printf("Enter N");
scanf("%d",&n);
i=1;
while(i<=n)
{
product=product*i;
i++;
}
printf("The factorial of %d is %d",n,product);
}
