#include<stdio.h>

int main()
{
    int num;
    int result=1;
    printf("Enter the Number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
    result=result*i;
    }
    printf("The Factorial Of the Number is %d",result);
}