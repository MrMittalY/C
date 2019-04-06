#include<stdio.h>

void main()

{
int q, r,sp,p,no,n;

printf("enter the no. of rows ");

scanf("%d",&no);

n=no;

for(r=1;r<=no;r++)

{
for(sp=1;sp<=n;sp++)

{
printf(" ");

}

n--;

for(p=1;p<=r;p++)

{
q++;

printf("%d ",q);

}

printf("\n");

}
}
