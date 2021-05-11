#include<stdio.h>
void main()
{
   int arr[100],eve[100],odd[100],n,j,i,counteve=0,countodd=0,temp;
   printf("Enter the number of elements : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("the array is : ");
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i%2==0)
       {
           eve[counteve++]=arr[i];
       }
       else
       {
           odd[countodd++]=arr[i];
       }
   }
    printf("\n");
   for(i=0;i<counteve;i++)
   {
       for(j=i;j<counteve;j++)
       {
           if(eve[i]>eve[j])
              {
                  temp=eve[i];
                  eve[i]=eve[i+1];
                  eve[i+1]=temp;
              }
       }
   }
    for(i=0;i<countodd;i++)
   {
       for(j=i;j<counteve;j++)
       {
           if(odd[i]>odd[j])
              {
                  temp=odd[i];
                  odd[i]=odd[i+1];
                  odd[i+1]=temp;
              }
       }
   }
   printf("\n");
   printf("The output is : %d",eve[counteve-2]+odd[countodd-2]);
}

