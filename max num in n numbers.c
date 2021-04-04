#include<stdio.h>
int maxnum(int);
void main()
{
    int n,max;
    printf("Enter the n value : ");
    scanf("%d",&n);
    max=maxnum(n);
    printf("The maximum number is :%d ",max);
}
    int maxnum(int n)
    {
        int max=1,i,j,arr[100],temp,count=0;
        printf("Enter the values : ");
        for(i=0;i<n;i++)
         {
           scanf("%d",&arr[i]);
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
            for(i=0;i<n-1;i++)
             {
                 if(arr[i]<arr[i+1])
                 {
                     count++;
                 }
             }
             if(count==n-1)
             {
                 max=arr[n-1];
             }

             return max;
    }
