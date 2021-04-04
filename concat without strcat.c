#include<stdio.h>
void main()
{
    char s1[50],s2[50];
    int len,i,j,len1,len2;
    printf("Enter the string1 : ");
    gets(s1);
    printf("Enter the string2 : ");
    gets(s2);
    len=strlen(s1);
    len1=strlen(s2);
    for(i=0;i<=len;i++)
    {
       if(s1[i]=='\0')
        {
            for(j=0;j<=len1;j++)
            {
               s1[i]=s2[j];
               i++;
            }
        }
    }
    printf("The concatenation is : %s",s1);
}
