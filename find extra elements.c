#include<stdio.h>
void main()
{
    int a[100],b[100],len,len1,i,j,count[100]={0};
    printf("Enter the number of elements in 1st array : ");
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number of elements in 1st array : ");
    scanf("%d",&len1);
    for(i=0;i<len1;i++)
     {
        scanf("%d",&b[i]);
     }
    if(len>len1)
    {
      for(i=0;i<len;i++)
      {
        for(j=0;j<len1;j++)
        {
           if(a[i]==b[j])
           {
               count[i]=1;
           }
        }
      }
      for(i=0;i<len;i++)
      {
        if(count[i]==0)
        {
            printf("%d %d",a[i],i);
        }
      }
    }
  else
  {
    for(i=0;i<len1;i++)
    {
        for(j=0;j<len;j++)
        {
           if(b[i]==a[j])
           {
               count[i]=1;
           }
        }
    }
    for(i=0;i<len1;i++)
    {
        if(count[i]==0)
        {
            printf("%d %d",b[i],i);
        }
    }
  }
}

