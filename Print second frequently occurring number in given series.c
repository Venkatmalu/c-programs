#include<stdio.h>
void main()
{
    int a[100],b[100],c[100],n,i,j,count,m=0,temp;
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
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                b[i]=count;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
       c[m]=b[i];
       m++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    i=0;
    while(a[i]==a[i+1])
    {
        i++;
    }
    printf("\nThe second most occurence digit is : %d",a[i+1]);
}

