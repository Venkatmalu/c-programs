#include<stdio.h>
void main()
{
    char s1[10];
    int a[10],len,i,j,count;
    printf("Enter the string : ");
    gets(s1);
    len=strlen(s1);
    for(i=0;i<len;i++)
    {
        count=0;
        for(j=0;j<len;j++)
        {
          if(s1[i]==s1[j])
          {
            count++;
          }
        }
        if(count==1)
              {
                printf("%c",s1[i]);
                break;
              }
    }

}
