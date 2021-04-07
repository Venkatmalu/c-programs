#include<stdio.h>
void main()
{
    int a[50],size,i,num,pos,choice,n;
    printf("Enter the number of elements : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Enter the choice\n 1.insertion\n 2.deletion \n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            printf("Enter the element : ");
            scanf("%d",&num);
            printf("Enter the position : ");
            scanf("%d",&pos);
            for(i=size-1;i>=pos;i--)
            {
                a[i+1]=a[i];
            }
            a[pos]=num;
            size++;
            break;
        }
    case 2:
        {
            printf("Enter the position of element to delete : ");
            scanf("%d",&pos);
            for(i=pos;i<size;i++)
            {
                a[i]=a[i+1];
            }
            size--;
            break;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}
