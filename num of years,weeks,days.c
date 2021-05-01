#include<stdio.h>
void main()
{
    int num,weeks,days;
    printf("Enter the number of days : ");
    scanf("%d",&num);
    weeks=days=num;
    if(num>=365)
    {
        weeks=num%365;
        num=num/365;
        printf("%d years ",num);
    }
    else
    {
        printf("0 years ");
    }
    if(weeks>=7)
    {
        days=weeks%7;
        num=weeks/7;
        printf("%d weeks ",num);
    }
    else
    {
        printf("0 weeks ");
    }
    printf("%d days",days);
}
