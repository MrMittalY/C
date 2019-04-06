#include<stdio.h>
void main()
{
int a,b;
char ch;

printf("enter two operands");
scanf("%d%d",&a,&b);
printf("Enter the charcacter");
scanf(" %c",&ch);
switch(ch)
{
case '+': printf("Addition =%d",a+b);
break;
case '-': printf("Subtraction=%d",a-b);
break;
case '*': printf("Multiplication=%d",a*b);
break;
case '/': printf("Division=%f",(float)a/(float)b);
break;
default : printf("Wrong choice");
break;
}}


