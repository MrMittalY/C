#include<stdio.h>
void main()
{
int a,b;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\nAfter swapping, A=%d and B=%d",a,b);
}
