#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20],temp;
     unsigned int len,j,i;
    printf("Enter the string :");
    gets(s1);
    len=strlen(s1);
    j=len-1;
    for(i=0;i<=len;i++)
    {
        if(i<j)
        {
            temp=s1[i];
            s1[i]=s1[j];
            s1[j]=temp;
            j--;
        }
    }
    printf("The reversed string : %s ",s1);
}
