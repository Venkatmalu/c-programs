#include<stdio.h>
void main()
{
    int n,res,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    res=fact(n);
    printf("factorial of %d is :%d",n,res);
}
int fact(int n)
{
    int res;
    if(n==0)
    {
        res=1;
    }
    else
    {
        res=n*fact(n-1);
    }
    return res;
}
