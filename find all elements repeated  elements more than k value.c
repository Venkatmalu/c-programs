#include<stdio.h>
void main()
{
    int arr[100],i,j,n,count,k,temp[100],m=0,num,t;
    printf("Enter the number of elements : ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is : ");
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("Enter the k value : ");
    scanf("%d",&k);
    n=num/k;
    for(i=0;i<num;i++)
    {
        count=0;
        for(j=0;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>n)
            {
                     temp[m++]=arr[i];
            }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(temp[i]<temp[j])
            {
                t=temp[i];
                temp[i]=temp[j];
                temp[j]=t;
            }
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(temp[i]==temp[j])
            {
                for(k=j;k<m;k++)
                {
                  temp[k]=temp[k+1];
                }
                m--;
                j--;
            }
        }
    }
    printf("\nThe output is : ");
     for(i=0;i<m;i++)
    {
        printf("%d ",temp[i]);
    }
    if(m==0)
    {
        printf("There is no elements more than k");

    }
}
