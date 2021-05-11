#include<stdio.h>
void main()
{
    int arr[100],n,i,j;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("\n\n**Enter must %d consecutive elements **\n\n",n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements are : ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int count=0;

        if(arr[i]==n)
        {

        }
        else
        {
            for(j=0;j<n-1;j++)
            {
                if(arr[i]+1==arr[j])
                {
                    break;
                }
                else
                {
                    count++;
                }
            }
        }
        if(count==n-1)
        {
            printf("\n\nMissing element is : %d\n\n",arr[i]+1);
            break;
        }
    }
}
