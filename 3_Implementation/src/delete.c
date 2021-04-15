#include "header.h"

int Reduce_Count()
{
    printf("enter 1 to remove a bus\n");
    printf("enter 2 to remove a car\n");
    printf("enter 3 to remove a bike\n");
    int val;
    scanf("%d",&val);
    if (val==1)
    {
        list.bus_count = list.bus_count - 1;
    }
    else if(val==2)
    {
        list.car_count = list.car_count - 1;
    }
     else if(val==3)
    {
        list.car_count = list.car_count - 1;
    }
    else
    {
        printf("\ninvalid option try again\n\n");
    }
    return 1;
    
}