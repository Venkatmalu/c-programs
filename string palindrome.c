#include<stdio.h>
void main()
{
    char s1[10],s2[10];
    int i,len,count=0,k;
    printf("Enter the string : ");
    gets(s1);
    len=strlen(s1);
    k=0;
    for(i=len-1;i>=0;i--)
    {
       s2[k]=s1[i];
       k++;
    }
    printf("%s",s2);

    for(i=0;i<=len-1;i++)
    {
        if(s1[i]==s2[i])
        {
            count++;
        }
    }
    if(count==len)
    {
        printf("it is a paslindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
}
