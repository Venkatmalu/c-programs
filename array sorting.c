#include<stdio.h>
void main()
{
    int arr[20],i,n,temp,j;
    printf("Enter the no.of elements : ");
    scanf("%d",&n);
    printf("Enter the unsorted array : \n");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1;j++)
      {
          if(arr[j]>arr[j+1])
          {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
          }
      }
    }
    printf("\nThe sorted array is :");
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}
