#include<stdio.h>
void main()
{
    int arr[100],n,i,j,count;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("\n\n**Enter must %d consecutive elements **\n\n",n);
    for(i=0;i<n+1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are : ");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n+1;i++)
    {
        count=0;
            for(j=0;j<n+1;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
        if(count==2)
        {
            printf("\n\nRepeated element is : %d\n\n",arr[i]);
            break;
        }
    }
    if(count!=2)
    {
        printf("\n\nThere is no repeated element\n\n");
    }
}
