#include<stdio.h>
void main()
{
    int arr[100],b[100],k,j=0,i,count1=0,count=0,n;
    printf("Enter the number of bits : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the concecutive number : ");
    scanf("%d",&k);
    for(i=0;i<12;i++)
    {
        if(arr[i]==1)
        {
            count++;
            b[j]=arr[i];
            j++;
            if(count==k)
            {
                b[j]=0;
                j++;
            }
        }
        else
        {
            count=0;
            b[j]=arr[i];
            j++;
        }
        count1++;
    }
    printf("\nThe output is : ");
    for(i=0;i<=count1;i++)
    {
        printf("%d ",b[i]);
    }
}
