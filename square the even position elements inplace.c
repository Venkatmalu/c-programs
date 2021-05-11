#include<stdio.h>
void main()
{
    int arr[100],i,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=(arr[i])*(arr[i]);
        }
    }
     printf("The output is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
