#include<stdio.h>
void main()
{
    int arr[]={-12,11,-13,-5,6,-7,5,-3,-6},i,j,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    if(arr[0]>arr[1])
       {
           int temp=arr[0];
           arr[0]=arr[1];
           arr[1]=temp;
       }
       if(arr[1]>arr[2])
           {
              int temp=arr[1];
              arr[1]=arr[2];
              arr[2]=temp;
           }
    for(i=2;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
           {
               int temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
               if(arr[i-1]>arr[i])
               {
                   temp=arr[i-1];
                   arr[i-1]=arr[i];
                   arr[i]=temp;
               }
               if(arr[i-2]>arr[i-1])
               {
                   temp=arr[i-2];
                   arr[i-2]=arr[i-1];
                   arr[i-1]=temp;
               }
           }
    }
    printf("\nThe output is : ");
           for(i=0;i<n;i++)
           {
             printf("%d ",arr[i]);
           }

}
