#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three numbers : ");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b || a>c)
    {
      if(a>c)
      {
          printf("%d",a);
      }
      else
      {
          printf("%d",c);
      }
    }
    else
    {
        if(b>c)
        {
           printf("%d",b);
        }
        else
        {
           printf("%d",c);
        }
    }
}
