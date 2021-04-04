#include<stdio.h>
void main()
{
    char s1[10],s2[10];
    int len,i,j,len1,count=0,count1=0;
    printf("Enter the string1 : ");
    gets(s1);
    printf("Enter the string2 : ");
    gets(s2);
    len=strlen(s1);
    len1=strlen(s2);
    if(len!=len1)
    {
        printf("the strings are not in anagram");
    }
    else
    {
        for(i=0;i<=len-1;i++)
        {
            for(j=0;j<=len1-1;j++)
            {
                if(s1[i]==s2[j] || s1[i]-32==s2[j] || s1[i]==s2[j]-32)
                {
                    count++;
                    break;
                }
            }
        }
         for(i=0;i<=len1-1;i++)
        {
            for(j=0;j<=len-1;j++)
            {
                if(s2[i]==s1[j] || s2[i]-32==s1[j] || s2[i]==s1[j]-32)
                {
                    count1++;
                    break;
                }
            }
        }
        if(count==count1)
        {
            printf("it is a anagram");
        }
        else
        {
            printf("it is not a anagram");
        }
    }
}
