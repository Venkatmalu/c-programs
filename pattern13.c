#include<stdio.h>
void main()
{
    int n,i,j,m=1;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        int num=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=m)
            {
                if(j%2!=0)
                {
                    printf("%d",num);
                    num++;
                }
                else
                {
                    printf("*");
                }
            }
             if(j>m)
            {
                break;
            }
        }
        if(i<(2*n)/2)
        {
            m=m+2;
        }
        else{
           m=m-2;
        }
        printf("\n");
    }
}
