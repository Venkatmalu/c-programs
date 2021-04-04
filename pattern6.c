#include<stdio.h>
void main()
{
    int i,j,n,m;
    printf("Enter the n value : ");
    scanf("%d",&n);
    printf("Enter the m value : ");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d %d ",j,i);
        }
        printf("\n");
    }
}
