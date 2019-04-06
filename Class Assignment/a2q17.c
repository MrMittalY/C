#include<stdio.h>
void main()
{
int a;
printf("Enter a\n");
scanf("%d",&a);
printf("\nValue of a=%d after right shift by 1 is %d ",a,a>>1);
printf("\nValue of a=%d after right shift by 2 is %d ",a,a>>2);
printf("\nValue of a=%d after left shift by 1 is %d ",a,a<<1);
printf("\nValue of a=%d after left shift by 2 is %d ",a,a<<2);

}
