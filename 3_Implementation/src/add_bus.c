#include "header.h"

int add_bus()
{
    list.bus_count = list.bus_count+1;
    list.bus_fare = 30*list.bus_count;
    return 1;
}