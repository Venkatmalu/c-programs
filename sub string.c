#include<stdio.h>
void main()
{
    char a[50],b[50];
    int len,len1,count=0,count1=0,m,i,j,start,p,r=0;
    printf("Enter the string : ");
    gets(a);
    printf("Enter the sub string :");
    gets(b);
    len=strlen(a);
    len1=strlen(b);
    j=len1;
    for(i=0;i<len;i++)
    {
       for(j=0;j<len1;j++)
       {
           if(a[i+j]!=b[j])
           {
               break;
           }
       }
      if(j==len1)
      {
        printf("\nIt is a substring");
        break;
      }
      else
      {
          if(i==len-1)
          printf("\nIt is not a sub string");
      }
    }
}

