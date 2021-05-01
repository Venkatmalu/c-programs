#include<stdio.h>
void main()
{
    int i,j,n,m=1;
    printf("Enter the range :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j>=n+1)
            {
                printf("%d ",m*m);
                m++;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
