#include<stdio.h>
void main()
{
    int n;
    printf("Enter the year : ");
    scanf("%d",&n);
    if(n%400==0 || (n%4==0  && n%100!=0))
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }
}
