#include<stdio.h>
void main()
{
  int n,i,j;
  int k=0;
  printf("Enter the range : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      k=0;
    for(j=1;j<=2*n-1;j++)
    {
      if(i+j>n && j-i<=5)
      {
          if(i+j>=n+1)
          {
                  if(j<=n)
                  {
                    printf("%d",++k);
                  }
                 else
                  {
                    printf("%d",--k);
                  }
          }
      }
      else
      {
          printf(" ");
      }
    }
    printf("\n");
  }
}
