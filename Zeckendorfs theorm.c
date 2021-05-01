#include<stdio.h>
void main()
{
    int n,i,a=1,b=0,sum=0,num,arr[100],count=0,res=0,next=1;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
      sum=a+b;
      a=b;
      b=sum;
      if(a>=num){
         break;
    }
    printf("%d ",a);
    arr[i]=a;
    count++;
    }
    printf("\nThe output is :");
     for(i=count-1;i<=count;i--)
    {
        if(res + arr[i] <= num){
           res=res+arr[i];
        if(res==num)
        {
            if(arr[i+1]!=next)
            break;
            else
                res=res-arr[i];
        }
        else
        {
               if(arr[i+1]!=next)
                {
                  printf("%d+",arr[i]);
                  next=arr[i];
                }
                else
                {
                   res=res-arr[i];
                }
        }
    }
    }
    printf("%d",arr[i]);
}

