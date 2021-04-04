#include<stdio.h>
void main()
{
    char s1[20];
    int end,start,len,i;
    printf("Enter the string : ");
    gets(s1);
    len=strlen(s1);
    end=len-1;
    start=len;
    i=len-1;
       while(s1[i]!=' ')
        {
          start--;
          i--;
        }
      for(i=start;i<=end;i++)
      {
        printf("%c",s1[i]);
      }
      end=start;
      while(s1[i]!=s1[0])
      {
          start--;
          i--;
      }
      for(i=start;i<end;i++)
      {
          printf("%c",s1[i]);
      }
}
