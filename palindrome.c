#include<stdio.h>
void main()
{
    int n,x,sum=0,temp;
    printf("Enter the number :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        x=n%10;
        sum=sum*10+x;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
}
