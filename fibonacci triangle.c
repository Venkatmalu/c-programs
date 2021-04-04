#include<stdio.h>
void main()
{
  int n,i,j,sum,a=0,b=1;
  printf("Enter the limit : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    a=0;
    b=1;
    for(j=1;j<=n;j++)
    {
        if(i>=j)
      {
         sum=a+b;
         a=b;
         b=sum;
         printf(" %d",a);
      }
    }
    printf("\n");
  }
}

