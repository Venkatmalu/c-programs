#include<stdio.h>

void main()
{
    char a[]="BASIC";
    int len,i,j,d,p;
    len=strlen(a);
    for(i=1;i<=len;i++)
    {
         d=len/2;
        for(j=1;j<=len;j++)
        {
            if(i+j>=len+1)
            {
                for(p=j;p<=j;p++)
                {
                    printf("%c",a[d]);
                    d++;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
