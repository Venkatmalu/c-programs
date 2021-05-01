#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],c;
    int i,j,len,k=0,count=0;
    printf("Enter the encoded string : ");
    gets(a);
    len=strlen(a);
    c=a[0];
    for(i=1;i<=len;i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            count=(a[i]-48)+count*10;
        }
        else
        {
            for(j=0;j<count;j++)
            {
                printf("%c",c);
            }
            count=0;
            c=a[i];
        }
    }
}
