#include<stdio.h>
#include<string.h>

char rev(char[],int,int);

char rev(char s1[],int j,int end)
{
    int i;
       if(j>=0)
       {
           if(s1[j]==' ' || j==0)
           {
              for(i=j;i<=end;i++)
              {
                printf("%c",s1[i]);
              }
             end=j;
           }
           j--;
           rev(s1,j,end);
       }

}

void main()
{
    char s1[100];
    int len,j,end;
    printf("Enter the string to reverse : ");
    gets(s1);
    len=strlen(s1);
    j=len-1;
    end=j;
    rev(s1,j,end);
}
