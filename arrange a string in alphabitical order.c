#include<stdio.h>
void main()
{
    char a[50],temp;
    int len,i,j;
    printf("Enter the string : ");
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s",a);
}
