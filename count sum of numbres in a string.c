#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20];
    int i,sum=0,len,len1,j,n;
    printf("Enter the string : ");
    gets(s1);
    len=strlen(s1);
    printf("%s",s1);
    for(i=0;i<=len-1;i++)
    {
          if(s1[i]>=48 && s1[i]<=57)

            {
                n=s1[i]-48;
                sum+=n;

            }
    }
    printf("\nsum of numbers in string is : %d",sum);
}
