#include<stdio.h>
int bignumber(int,int,int);

int bignumber(int a,int b,int c)
{
    int max=0;
     if(a>b || a>c)
    {
      if(a>c)
      {
          max=a;
      }
      else
      {
          max=c;
      }
    }
    else
    {
        if(b>c)
        {
           max=b;
        }
        else
        {
           max=c;
        }
    }

    return max;
}
void main()
{
    int a,b,c,max=0;
    printf("Enter the three numbers : ");
    scanf("%d\n%d\n%d",&a,&b,&c);
    max=bignumber(a,b,c);
    printf("The maximum number is :%d",max);
}
