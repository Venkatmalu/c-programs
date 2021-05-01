#include<stdio.h>
void main()
{
    int arr[100],b[100],i,n,j,k,m,temp;
    printf("Enter the array1 size : ");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the size of array2 : ");
    scanf("%d",&m);
     for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }
    for(i=0;i<m;i++)
    {
        n++;
        arr[n-1]=b[i];
    }
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                  arr[k]=arr[k+1];
                }
                n--;
            }
        }

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
     printf("\nThe result is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
