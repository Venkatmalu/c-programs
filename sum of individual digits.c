#include<stdio.h>
void main()
{
    int n,x,sum=0,temp,i;
    printf("Enter the 3 digit number : ");
    scanf("%d",&n);
    temp=n;
    for(i=0;i<=2;i++)
    {
       x=n%10;
       sum+=x;
       n=n/10;
    }
     n=temp;
    printf("sum of the individual numbers is : %d",sum);
}
