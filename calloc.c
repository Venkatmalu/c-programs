#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*arr,i;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    if(arr=='\0')
    {
        printf("memory is full");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("%d",*(arr+i));
        }
    }

}
