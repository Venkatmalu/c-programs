#include<stdio.h>
void main()
{
    int num,res,counteven=0,countodd=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num>0)
    {
        res=num%10;
        if(res%2==0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
        num=num/10;
    }
    printf("Even count : %d\nOdd count : %d",counteven,countodd);
}
