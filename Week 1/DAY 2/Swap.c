#include<stdio.h>

void main()
{
 int num1,num2;
 printf("Enter the first Number: ");
 scanf("%d",&num1);
 printf("Enter the second Number: ");
 scanf("%d",&num2);

 num1=num1+num2;
 num2=num1-num2;
 num1=num1-num2;

 printf("The First Number after Swapping : %d",num1);
 printf("The Second Number after Swapping : %d",num2);

  
  
}