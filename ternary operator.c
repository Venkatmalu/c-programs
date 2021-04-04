#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the 3 numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    a>b&&a>c?printf("a is greater"):b>c?printf("b is greater"):printf("c is greater");
}
