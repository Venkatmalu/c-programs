#include<stdio.h>
int main()
{
    int a,b,x=1,y=0,i;
    printf("Enter the first num : ");
    scanf("%d",&a);
    printf("Enter the second num :");
    scanf("%d",&b);
    for(i=2;i<a&&b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            x=i;
            break;
        }
    }
    printf("GCD of the numbers %d,%d is : %d\n",a,b,x);
     y=(a*b)/x;
    printf("LCM of the numbers %d,%d is : %d",a,b,y);
    return 0;
}


