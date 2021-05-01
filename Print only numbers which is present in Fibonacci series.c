#include<stdio.h>
void main()
{
    int arr[100],n,i,j,temp,max,sum,a=1,b=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    max=arr[0];
    printf("\n");
    for(j=0;j<max+1;j++)
    {
        sum=a+b;
        a=b;
        b=sum;
        i=0;
        while(i<n)
        {
            if(arr[i]==a)
            {
                printf("%d ",a);
                break;
            }
            i++;
        }
    }
}
