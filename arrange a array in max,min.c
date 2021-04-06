#include<stdio.h>
void main()
{
    int a[50],i,n,j,k,m,p,temp;
    printf("Enter the number of elements :");
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
         p=i+1;
         for(j=i+1;j<n;j++)
         {
             if(a[i]+a[j]==n+1)
             {
                 if(i==n-2)
                 {
                     temp=a[i];
                     a[i]=a[j];
                     a[j]=temp;
                 }
                 else
                 {
                     temp=a[i+1];
                     a[i+1]=a[i];
                     a[i]=a[j];
                     a[j]=temp;
                 }
             }
         }
         if(i+1!=n-1)
             {
                 for(k=p+1;k<n;k++)
                 {
                     for(m=k+1;m<n;m++)
                     {
                         if(a[k]>a[m])
                          {
                            temp=a[k];
                            a[k]=a[m];
                            a[m]=temp;
                          }
                     }
                 }
             }
             i++;
             if(i==n-1)
         {
             break;
         }

     }
     printf("\n The pairs are : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
