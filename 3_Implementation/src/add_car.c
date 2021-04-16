#include "header.h"

int add_car()
{
    list.car_count = list.car_count+1;
    list.car_fare = 50*list.car_count;

    return 1;
}
