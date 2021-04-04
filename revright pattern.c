#include<stdio.h>
void main()
{
  int i,j,n;
  printf("Enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
       if(j+i<=n-1)
       printf("*");
       else
        printf(" ");
     }
     printf("\n");
  }
}
