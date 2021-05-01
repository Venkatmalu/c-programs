#include<stdio.h>
#include<stdlib.h>
int main()
{
    int** arr;
    int row,col,i,j,count=0;
    printf("Enter the row and col :");
    scanf("%d%d",&row,&col);
    arr=(int**)calloc(row,sizeof(int*));
    for(i=0;i<row;i++)
    {
        *(arr+i)=(int*)calloc(col,sizeof(int));
    }
   for(i=0;i<row;i++)
   {
       for(j=0;j<col;j++)
       {
           printf("Enter the element :");
           scanf("%d",*(arr+i)+j);
       }
   }
   printf("\nThe matrix is :\n");
   for(i=0;i<row;i++)
   {
       for(j=0;j<col;j++)
       {
           printf("%d",arr[i][j]);
       }
       printf("\n");
   }
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        if(arr[i][j]==0)
        {
            count++;
        }
    }
}
if(count>(row*col)/2)
{
    printf("It is a sparse matrix");
}
else
{
    printf("It is not a sparse matrix");
}
}
