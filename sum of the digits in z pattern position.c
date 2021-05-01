#include<stdio.h>
void main()
{
    int row,col,i,j,a[100][100],sum=0;
    printf("Enter the row size : ");
    scanf("%d",&row);
    printf("Enter the col size : ");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==0 || i+j==row-1 || i==row-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nThe sum is : %d",sum);
}
