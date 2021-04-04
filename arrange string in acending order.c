#include<stdio.h>
void main()
{
    char s1[10],s2[10],s3[10];
    int i=0;
    printf("Enter the string1 : ");
    gets(s1);
    printf("Enter the string2 : ");
    gets(s2);
    printf("Enter the string3 : ");
    gets(s3);
    if(s1[i]<s2[i] || s1[i]-32<s2[i] || s1[i]<s2[i]-32)
    {
       if(s1[i]<s3[i] || s1[i]-32<s3[i] || s1[i]<s3[i]-32)
       {
           printf("%s",s1);
           if(s2[i]<s3[i] || s2[i]-32<s3[i] || s2[i]<s3[i]-32)
           {
               printf("\n%s",s2);
               printf("\n%s",s3);
           }
           else
           {
               printf("\n%s",s3);
               printf("\n%s",s2);
           }
       }
       else
       {
           printf("%s",s3);
           printf("\n%s",s1);
           printf("\n%s",s2);
       }
    }
    else
    {
       if(s2[i]<s3[i] || s2[i]-32<s3[i] || s2[i]<s3[i]-32)
       {
           printf("%s",s2);
           if(s3[i]<s1[i] || s3[i]-32<s1[i] || s3[i]<s1[i]-32)
           {
               printf("\n%s",s3);
               printf("\n%s",s1);
           }
           else
           {
               printf("\n%s",s1);
               printf("\n%s",s3);
           }
       }
    }
}
