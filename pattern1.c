#include<stdio.h>
void main()
{
    int n,i,j,k=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",k);
        }
        k++;
        printf("\n");
    }
}
