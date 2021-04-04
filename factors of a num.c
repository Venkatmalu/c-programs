#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0 && i<=n)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
