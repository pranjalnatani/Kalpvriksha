#include<stdio.h>

int main()
{
    int num;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
    sum+=i;
    }
    printf("The Sum is: %d",sum);
}