#include<stdio.h>
void main()
{
    int arr[100],n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    if(n>1)
    {
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
            for(int j=0;j<n;j++)
             {
               if(arr[i]>arr[j])
                {
                 int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
                }
             }
          }
        printf("\nThe second MAX number is : %d",arr[1]);
    }
    else
    {
        printf("\nThere is no second Max number\n");
    }
}
