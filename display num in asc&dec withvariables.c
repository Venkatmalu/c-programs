#include<stdio.h>
void main()
{
    int i=0,a,b,c;
    printf("Enter the values of a,b&c : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The decending order of given numbers is :");
    if(a>b)
    {
       if(a>c)
       {
           printf("%d",a);
           if(b>c)
           {
               printf("%d",b);
               printf("%d",c);
           }
           else
           {
               printf("%d",c);
               printf("%d",b);
           }
       }
       else
       {
           printf("%d",c);
           printf("%d",a);
           printf("%d",b);
       }
    }
    else
    {
       if(b>c)
       {
           printf("%d",b);
           if(c>a)
           {
               printf("%d",c);
               printf("%d",a);
           }
           else
           {
               printf("%d",a);
               printf("%d",c);
           }
       }
    }
}

