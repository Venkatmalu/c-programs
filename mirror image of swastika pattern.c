#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n/2+1 || j==n/2+1 || j==1&&i>=n/2+1 || i==1&&j<=n/2+1 || j==n&&i<=n/2+1 || i==n&&j>=n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
