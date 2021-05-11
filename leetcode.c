#include<stdio.h>
void main()
{
    int arr[100],n,i,j,index1,index2,temp;
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
        for(j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                  temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
            }
        }
    }
    printf("\n\nThe output is %d\n\n",(arr[n-1]-1)*(arr[n-2]-1));
}
