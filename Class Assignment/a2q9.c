#include<stdio.h>
void main()
{
int ch;
printf("Enter the choice");
scanf(" %d",&ch);
switch(ch)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
printf("No. of days in month is 31");
break;
case 2:
printf("No. of days in month is 28");
break;
case 4:
case 6:
case 9:
case 11:
printf("No. of days in the month is 30");break;
default : printf("Wrong choice");
break;
}}


