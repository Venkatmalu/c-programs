#include<stdio.h>
void main()
{
    int i=0,a,b,c;
    printf("Enter the values of a,b&c : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
       if(a>c)
       {
           printf("a is greater");
       }
       else
       {
          if(c>b)
          {
              printf("c is greater");
          }
       }
    }
    else
    {
       if(b>c)
       {
         printf("b is greater");
       }
       else
       {
           printf("c is greater");
       }
    }
}

