#include "header.h"

int add_bike()
{
    list.bike_count = list.bike_count+1;
    list.bike_fare = 10*list.bike_count;
    return 1;
}