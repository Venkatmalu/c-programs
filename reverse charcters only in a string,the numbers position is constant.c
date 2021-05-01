#include<stdio.h>
void main()
{
    char s1[100];
    int len,i,j,temp;
    printf("Enter the string : ");
    gets(s1);
    len=strlen(s1);
    i=0;
    j=len-1;
    while(i<j)
    {
        while(s1[i]>=32&&s1[i]<=64)
        {
            i++;
        }
        while(s1[j]>=32&&s1[j]<=64)
        {
            j--;
        }
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
        i++;
        j--;
    }
    printf("\n%s",s1);
}
