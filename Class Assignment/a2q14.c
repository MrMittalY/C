#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the values of a and b\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("A and B after swapping are %d and %d",a,b);
}
