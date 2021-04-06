#include<stdio.h>
void main()
{
    int n,i,j,m;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=1;
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            {
                printf("%d",m++);
            }
        }
        printf("\n");
    }
}
