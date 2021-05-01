#include<stdio.h>
void main()
{
    int digit,num,len=0,i=0,sum,a[100]={0};
    printf("Enter the digit to add :");
    scanf("%d",&digit);
    printf("Enter the number : ");
    scanf("%d",&num);
        while(num!=0)
      {
        sum=0;
        sum=num%10;
        sum+=digit;
        a[i]=sum;
        i++;
        num=num/10;
        len++;
      }
       for(i=len-1;i>=0;i--)
        {
         printf("%d",a[i]);
        }
}
