#include<stdio.h>
struct student
{
    int reg;
    char name[10];
    float fees;
};
void main()
{
    struct student* std;
    std=(struct student*)malloc(sizeof(struct student));
    if(std=='\0')
    {
        printf("memory full");
    }
    else
    {
        printf("student details : \n");
        scanf("%d\n%s\n%f",&std->reg,std->name,&std->fees);
        printf("%d\n%s\n%f",std->reg,std->name,std->fees);
    }
}
