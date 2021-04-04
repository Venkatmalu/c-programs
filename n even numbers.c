#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("The even numbers : \n");
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
