#include<stdio.h>
#include<string.h>
void main()
{
    char s1[10],s2[10];
    int len,len2,i,count=0;
    printf("Enter the string1 : ");
    gets(s1);
    printf("Enter the string2 : ");
    gets(s2);
    len=strlen(s1);
    len2=strlen(s2);
    if(len!=len2)
    {
        printf("Not equal");
    }
    else
    {
        for(i=0;i<len;i++)
        {
            if(s1[i]==s2[i])
            {
                count++;
            }
        }
        if(count==len)
        {
           printf("Equal");
        }
        else
        {
           printf("Not equal");
        }
    }
}
