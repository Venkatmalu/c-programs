#include<stdio.h>
#include<stdbool.h>
#include<string.h>
    bool rev(char s1[],int i,int j)
      {
          char temp;
             if(i<j)
              {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
                rev(s1,i++,j--);
              }
              return 1;
      }
bool rec(char s1[])
{
int n=strlen(s1);
return rev(s1,0,n-1);
}
int main()
{
    char s1[50];
    printf("Enter the string : ");
    gets(s1);
    if(rec(s1))
         printf("true");

        return 0;
}
