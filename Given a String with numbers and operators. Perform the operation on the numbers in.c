#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,j=0,res=0,p,len;
    printf("Enter the Exprssion : ");
    gets(str);
    len=strlen(str);
    printf("%s",str);
    printf("\nThe output : ");
    for(i=0;i<len;i++)
     {
         if(str[i]=='+')
            {
               res=(str[j]-48)+(str[j+1]-48);
               j++;
               str[j]=res+48;
            }
          if(str[i]=='*')
             {
                 res=(str[j]-48)*(str[j+1]-48);
                 j++;
                 str[j]=res+48;
             }
             if(str[i]=='-')
            {
               res=(str[j]-48)-(str[j+1]-48);
               j++;
               str[j]=res+48;
            }
            if(str[i]=='/')
            {
               res=(str[j]-48)/(str[j+1]-48);
               j++;
               str[j]=res+48;
            }

     }
     printf("%d",res);
}
