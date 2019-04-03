#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
  int ch,a,c,ch1;    
  float b,r,area,si,pa,i,t;
  char e,op;
do
{
     printf("\n\n\n---------------------------MENU-----------------------------");
     printf("\n1.Print Hello World");
     printf("\n2.Input an integer and display it");
     printf("\n3.Input a decimal number and display");
     printf("\n4.Input a character and display it");
     printf("\n5.Add,subtract,multiply and divide numbers");
     printf("\n6.Find power of a no.");
     printf("\n7.Area of a circle");
     printf("\n8.Calculate simple interest");
     printf("\nEnter choice    "); 
     scanf("%d",&ch);

{
     if(ch==1)
          printf("\nHello World\n\n");
     else if(ch==2)
         { printf("\nEnter integer   ");
           scanf("%d",&a);
           printf("\nEntered no.=%d",a);
           printf("\n");     
         }  
     else if(ch==3)
         { printf("\nEnter a decimal no.    ");
           scanf("%f",&b);
           printf("\nEntered no.=%f",b);
           printf("\n");
         }  
     else if(ch==4)
         {  printf("\nEnter a character  ");
            scanf("%c",&e); 
            printf("\nEntered character=%c",e);
            printf("\n");
         }              
     else if(ch==5)
         {  printf("\n---------CALCULATOR MENU---------");
            printf("\n1.Add");
            printf("\n2.Mutiply");
            printf("\n3.Divide");
            printf("\nEnter choice    ");
            scanf("%d",&ch1);
            if(ch1==1)
                {printf("\nEnter 2 no.s      ");
                 scanf("%d %d",&a,&c);
                 printf("\nSum=%d",a+c);
                 printf("\n");
                 }
             else if(ch1==2) 
                 {printf("\nEnter 2 no.s   ");
                  scanf("%d %d",&a,&c);
                  printf("\nProduct=%d",a*c);
                  printf("\n");
                 }
            else if(ch1==3) 
                 {printf("\nEnter no. numerator and denominator   ");
                  scanf("%d %d",&a,&c);
                  printf("\nQuotient=%d",a/c);
                  printf("\nRemainder=%d",a%c);
                  printf("\n");
                 } 
            else 
                 printf("\nOption not available");
         } 
           
      else if(ch==7)
          {   printf("\nEnter radius   ");
              scanf("%f",&r);
              area=3.14*r*r;
              printf("\nArea=%f",area); 
           }    
            
      else if(ch==8)
          {   printf("\nEnter Principal   ");
              scanf("%f",&pa);
	      printf("\nEnter Interest   ");
              scanf("%f",&i);
	      printf("\nEnter Time(in years)  ");
              scanf("%f",&t);
              si=0.01*pa*i*t;
              printf("\nSI=%f",si);
	      printf("\nAmount=%f",pa+si); 
           }    
            
      else
            printf("WRONG CHOICE    ");
}
  printf("\nRETURN TO MENU?(Y/N)\n");
  scanf("%c",&op);
}while(op=='Y'||op=='y');

return 0;
}
