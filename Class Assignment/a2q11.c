#include<stdio.h>
void main()
{
char ch;
printf("enter the choice");
scanf("%c",&ch);
switch(ch)
{
case 'M':
printf("\nMale\n");break;
case 'F':
printf("\nFemale\n");break;
default:
printf("Wrong Choice");break;
}}
