#include<stdio.h>
void main()
{
    int i,j,n,b=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=2*n-1;j++)
        {
            if(i+j>=n+1 && j-i<=n-1)
            {
                printf("%d",b);
                ++b;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
