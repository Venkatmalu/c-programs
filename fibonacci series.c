#include<stdio.h>
void main()
{
    int n,i,a=1,b=0,sum=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      sum=a+b;
      a=b;
      b=sum;
      printf(" %d",a);
    }
}
