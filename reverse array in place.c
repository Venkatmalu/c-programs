#include<stdio.h>
void main()
{
    int arr[50],i,n,j,temp=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    j=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    printf("\nReversed array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
