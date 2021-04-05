#include<stdio.h>
void main()
{
    int n,i,j,p=0,m=1;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==0)
            {
                printf("%d",p);
            }
            else
            {
               printf("%d",m);
            }
        }
        printf("\n");
    }
}
