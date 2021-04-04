#include<stdio.h>
#include<stdbool.h>
#include<string.h>
    bool rev(char s1[],int i,int j)
      {
             if(i==j)
              {
                return 1;
              }
              if(s1[i]!=s1[j])
              {
               return 0;
              }
              if(i<j+1)
              {
                  return rev(s1,i+1,j-1);
              }

              return 1;
      }
bool rec(char s1[])
{
int n=strlen(s1);
if (n==0)
    {
    return 1;
    }

return rev(s1,0,n-1);
}
int main()
{
    char s1[50];
    printf("Enter the string : ");
    gets(s1);
    if(rec(s1))
    {
      printf("yes");
    }
    else
    {
      printf("No");
    }

        return 0;
}
