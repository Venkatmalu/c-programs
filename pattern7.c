#include<stdio.h>
void main()
{
    int i,j,n,sum;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=i;
        for(j=1;j<=n;j++)
        {
            printf("%d ",sum);
            sum=sum+n;
        }
        printf("\n");
    }
}
