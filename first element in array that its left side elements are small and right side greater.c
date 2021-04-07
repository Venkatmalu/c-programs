#include<stdio.h>
void main()
{
    int a[50],n,i,j,start,count,count1;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        start=i;
        count=0;
        count1=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                count++;
            }
            while(start-1>=0)
            {
                if(a[i]>a[start-1])
                {
                    count1++;
                }
                start--;
            }
        }
        printf("\n%d %d",count,count1);
        if(count+count1==n-1)
        {
            printf("\n The number is : %d",a[i]);
            break;
        }
    }
}
