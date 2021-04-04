#include<stdio.h>
void main()
{
    int i,j,k=1,n,sum;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if(i==i)
            {
                sum=sum+k;
                printf("%d",sum);
            }
        }
        k++;
        printf("\n");
    }
}
