#include<stdio.h>
void main()
{
    int a[100],sum=0,i,j,check=-1,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\nThe output is : ");
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=0;
            sum=sum+a[i]+a[j];
            if(sum==0)
            {
                printf("YES...There is a sub array\n\n");
                check=0;
                break;
            }
            if(j!=n-1)
            {
                sum=sum+a[j+1];
                if(sum==0)
                {
                  printf("YES...There is a sub array\n\n");
                  check=0;
                  break;
                }
            }
        }
        if(check==0)
        {
            break;
        }
    }
    if(check==-1)
    {
        printf("NO...There is no sum of 0 sub array\n\n");
    }

}
