#include<stdio.h>
#include<string.h>
void main()
{
    char s1[5]={"aeiou"};
    char s2[50];
    int len,len1,i,j,count=0;
    printf("Enter the string : ");
    gets(s2);
    len=strlen(s1);
    len1=strlen(s2);
    for(i=0;i<=len-1;i++)
    {
        for(j=0;j<=len1-1;j++)
        {
            if(s1[i]==s2[j])
            {
                count++;
            }
        }
    }
 printf("The no.of vowels in the string are : %d",count);
}
