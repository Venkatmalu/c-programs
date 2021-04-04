#include<stdio.h>
void main()
{
    int a,n=16,i,x;
    printf("Enter the number : ");
    scanf("%d",&a);
    x=a;
    for(i=1;i<=n;i++)
    {
        x=a*i;
        printf("%d*%d=%d",a,i,x);
        printf("\n");
    }
}
