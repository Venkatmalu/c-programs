#include<stdio.h>
void main()
{
    int arr[100],c[100],i,j,count,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                count++;
            }
        }
        c[i]=count;
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(c[i]<c[j])
            {
                int temp=c[i];
                c[i]=c[j];
                c[j]=temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("\nThe output is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
