#include<stdio.h>
void main()
{
    int initialpetrol,numpetrol,bunkarr[100],caparr[100],i,remaining=0,j;
    printf("petrol in car : ");
    scanf("%d",&initialpetrol);
    printf("Number of petrol bunks : ");
    scanf("%d",&numpetrol);
    printf("Distance to each petrol from petrol bunk : \n");
    for(i=0;i<numpetrol;i++)
    {
        scanf("%d",&bunkarr[i]);
    }
    for(i=0;i<numpetrol;i++)
    {
        printf("%d ",bunkarr[i]);
    }
    printf("\nCapacity of each petrol bunks respectively : \n");
    for(i=0;i<numpetrol;i++)
    {
        scanf("%d",&caparr[i]);
    }
    for(i=0;i<numpetrol;i++)
    {
        printf("%d ",caparr[i]);
    }

    if(initialpetrol<bunkarr[0])
      {
        printf("\nMore petrol is need to reach first bunk.....");
      }
      else
      {
        remaining=initialpetrol-bunkarr[0];
        for(i=0;i<numpetrol;i++)
          {
             if(i!=0)
              {
                remaining=remaining-bunkarr[i];
              }
           for(j=i;j<numpetrol;j++)
            {
                remaining=remaining+caparr[j];
                break;
            }
          }
         if(remaining>0)
         {
             printf("\nThe remaining petrol in car is : %d ",remaining);
         }
         else
         {
             printf("\nNo more petrol in ur car to reach next bunk.....");
         }
      }
}
