#include<stdio.h>
void main()
{
    int a[100],i,j,k,n,m,temp;
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
    printf("Enter the k value : ");
    scanf("%d",&k);
    j=k-1;
    i=0;
    while(j<n)
    {
        m=j;
        while(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j--;
            i++;
        }
        i=m+1;
        j=m+k;
    }
    if(k%2!=0)
    {
    temp=a[i];
    a[i]=a[n-1];
    a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

