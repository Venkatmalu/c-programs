#include<stdio.h>
void main()
{
    char s1[100]="1",a[100];
    int n,i,j,count,m,k;
    printf("Enter the range : ");
    scanf("%d",&n);
    printf("%s\n",s1);
    for(i=0;i<n;i++)
    {
        count=0;
        k=0;
        for(m=0,j=0;j<s1[j]!=NULL;j++)
        {
            if(s1[m]==s1[j])
            {
                count++;
            }
            else
            {
                a[k++]=count+48;
                a[k++]=s1[m];
                m=j;
                count=1;
            }
        }
        a[k++]=count+48;
        a[k++]=s1[m];
        a[k]=NULL;
        printf("%s\n",a);
        strcpy(s1,a);
    }
}
