#include<stdio.h>
#include<stdlib.h>
struct emp
{
    int empno;
    char empna;
    float empsa;
};
void main()
{
    struct emp* ptr;
    ptr=(struct emp*)malloc(sizeof(struct emp));
    if(ptr=='\0')
    {
        printf("memory error");
    }
    else
    {
        printf("Enter employ details : \n");
        scanf("%d\n%s\n%f",&ptr->empno,ptr->empna,&ptr->empsa);
        printf("%d\n%s\n%f",ptr->empno,ptr->empna,ptr->empsa);
    }
}
