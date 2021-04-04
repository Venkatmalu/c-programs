#include<stdio.h>
void main()
{
    int arr[50],i,n,j,count=0;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the sorted array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    i=0;
    while(i<n)
    {
        if(arr[i]==
           arr[i+1])
        {
            count++;
        }
        i++;
    }
    printf("\n%d",count);
}
