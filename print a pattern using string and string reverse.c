#include<stdio.h>
void main()
{
    char a[100];
    int i,j,len;
    printf("Enter the string : ");
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(i==j || i+j==len-1)
            {
                printf("%c",a[j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
