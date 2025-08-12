#include<stdio.h>

void main()
{
    int p,r,t;
    float Interest;
    printf("Enter the Principal Amount: ");
    scanf("%d",&p);
    printf("Enter the Rate Of Interest: ");
    scanf("%d",&r);
    printf("Enter the Time: ");
    scanf("%d",&t);
    Interest= (p*r*t)/100.0;
    printf("The Simple Interest : %f",Interest);


}