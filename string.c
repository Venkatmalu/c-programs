#include<stdio.h>
void main()
{
    char a[50],temp;
    int len,i,j=0,p,n,temp1,m;
    printf("Enter the string : ");
    gets(a);
    len=strlen(a);
    n=len-1;
    for(i=0;i<len;i++)
    {
        if(a[i]==' ')
        {
            p=i;
            m=i;
            while(m>j)
            {
                temp1=m;
                temp=a[j];
                a[j]=a[temp1-1];
                a[temp1-1]=temp;
                j++;
                m--;
            }
        }
    }
        for(i=p+1;i<len;i++)
        {
            if(i<=n)
            {
                temp=a[i];
                a[i]=a[n];
                a[n]=temp;
                n--;
            }
            if(p==len)
             {
               break;
             }
        }
    printf("%s",a);
}
