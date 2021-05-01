    #include<stdio.h>
void main()
{
    int a[100],b[100]={0},i,j,m,temp,count,n,p;
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
    printf("\nThe output is : ");
    for(i=0;i<n;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                b[m]=a[j];
                m++;
            }
        }
        for(j=0;j<m;j++)
            {
                for(p=0;p<m;p++)
                {
                   if(b[j]<b[p])
                   {
                     temp=b[j];
                     b[j]=b[p];
                     b[p]=temp;
                   }
                }
            }
            if(m==0)
            {
                printf("%d>no greater element ",a[i]);
            }
            else
            {
              printf("%d>%d ",a[i],b[0]);
            }
}
}

