#include<stdio.h>

void tower(int n,char s,char d,char a)
{
    if(n==1)
    {
        printf("\nMove disk %d from %c to %c",n,s,d);
        return;
    }
    tower(n-1,s,a,d);
    printf("\nMove disk %d from %c to %c",n,s,d);
    tower(n-1,a,d,s);
}

void main()
{
    int num;
    printf("Enter the number of disks : ");
    scanf("%d",&num);
    printf("the out put is  :  ");
    tower(num,'A','C','B');
}
