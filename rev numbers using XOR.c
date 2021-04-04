#include<stdio.h>
void main()
{
   int arr[10],i,n,count=0,temp;
   printf("Enter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the elements : \n");
   for(i=0;i<=n;i++)
   {
       scanf("\n%d",&arr[i]);
   }
   for(i=0;i<=n;i++)
   {
       if(arr[i]^arr[n-1]==0)
       {
           temp=arr[i];
           arr[i]=arr[n-1];
           arr[n-1]=temp;
           n--;
       }
   }
   for(i=0;i<=n;i++)
   {
     printf("%d ",arr[i]);
   }
}
