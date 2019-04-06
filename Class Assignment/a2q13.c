#include<stdio.h>
void main()
{
char a;
printf("enter the letter");
scanf("%c",&a);
switch(a)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("THE LETTER IS A VOWEL");break;
default: printf("THE LETTER IS A CONSONANT");break;
}}
