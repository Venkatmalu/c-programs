#include<stdio.h>
void main()
{
int n,i,j,k;
printf("enter n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
  if(i==j && i>=j)
  {
printf("*");
}
else
printf("\n");
}
}
