#include<stdio.h>

void main()
{
    int arr[100],i,j,n,m,k,temp;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    j=n-1;
    i=0;
    while(i<j)
    {
        temp=arr[j];
        arr[j]=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
        for(m=i+2;m<n;m++)
        {
            for(k=m+1;k<n;k++)
            {
                if(arr[m]>arr[k])
                {
                    temp=arr[m];
                    arr[m]=arr[k];
                    arr[k]=temp;
                }
            }
        }
        i=i+2;
    }
    printf("\nThe output is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
