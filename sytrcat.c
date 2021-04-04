#include<stdio.h>
void main()
{
    char s1[20],s2[10];
    printf("Enter the string1 : ");
    gets(s1);
    printf("Enter the string2 : ");
    gets(s2);
    strcat(s1,s1);
    if(strstr(s1,s2))
        printf("yes");
        else
            printf("no");

}
