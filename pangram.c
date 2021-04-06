#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[25]={0};
    int i=0,len,count=0,capstart,capend,smallstart,smallend,m;
    printf("Enter the string : ");
    gets(a);
    len=strlen(a);
    capstart=65;
    capend=90;
    smallstart=97;
    smallend=122;
    if(len>=26)
    {
            for(i=0;i<len;i++)
            {
                m=0;
                if(capstart<=a[i]&&a[i]<=capend)
                 {
                   m=a[i]-capstart;
                   b[m]++;
                 }
                 else
                 {
                   if(smallstart<=a[i]&&a[i]<=smallend)
                   {
                       m=a[i]-smallstart;
                       b[m]++;
                   }
                 }
            }
            for(i=0;i<=25;i++)
            {
                if(b[i]!=0)
                {
                    count++;
                }
            }
    }
    else
    {
        printf("not a pangram");
    }
    if(count==26)
    {
        printf("it is pangram");
    }
    else
    {
        printf("not pangram");
    }
}
