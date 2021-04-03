#include<stdio.h>
void main()
{
   int i,n,x,sum=0,temp;
   printf("Enter the number : ");
   scanf("%d",&n);
   temp=n;
   for(i=0;i<=3;i++)
   {
       x=n%10;
       sum+=pow(x,3);
       n=n/10;
   }
   n=temp;
   if(n==sum)
   {
      printf("%d is an armstrong number",n);
   }
   else
   {
       printf("%d is not a armstrong number",n);
   }
}
