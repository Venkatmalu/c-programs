#include<stdio.h>
void main()
{
   int i,n,count=0;
   printf("Enter the range : ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
       count+=num_of_zeros(i);
   }
   printf("%d",count);
}
int num_of_zeros(int i)
{
    int a,count=0;
    do
    {
        a=i%10;
        if(a==0)
        {
            count++;
        }
        i=i/10;
    }
    while(i>=10);
    return count;
}

