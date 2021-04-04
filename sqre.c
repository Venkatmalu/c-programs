#include<stdio.h>
void main()
{
  int i,j,n;
  printf("enter n ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        if(i==0 || j==0 || i==n-1 || j==n-1  || i==j  || j==n-1-i)
        {
           printf("* ");
        }
           else
           {
              printf("  ");
           }

        }
         printf("\n");

    }


  }



