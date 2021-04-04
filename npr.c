#include<stdio.h>
int fact(int);
void main()
{
    int n,r,npr,ncr;
    printf("Enter the two numbers : ");
    scanf("%d%d",&n,&r);
    npr=fact(n)/fact(n-r);
    printf("The nPr for the given numbers is : %d",npr);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("\nThe nCr for the given numbers is : %d",ncr);
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
