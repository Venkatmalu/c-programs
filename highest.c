#include<stdio.h>
void main()
{
    char s1[50];
    int a[50],len,i,j,count;
    printf("Enter the string : ");
    gets(s1);
    len=strlen(s1);
    for(i=0;i<len;i++)
    {
        count=0;
        for(j=i+1;j<len;j++)
        {
           if(s1[i]==s1[j])
            {
              count++;
            }
        }
        a[i]=count;
    }
    for(i=0;i<len;i++)
    {
          if(a[i]>a[i+1])
        {
            printf("%c",s1[i]);
            break;
        }
    }
}
