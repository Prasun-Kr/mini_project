#include "header.h"

void display()
{
    printf(".................................................................\n");
    
    printf("Number of bus = %d\n", list.bus_count);
    printf("Total Fare of bus = %d\n", list.bus_fare);
    printf(".................................................................");
    printf("\n");
    
    printf("Number of bike = %d\n", list.bike_count);
    printf("Total Fare of bike = %d\n", list.bike_fare);
    printf(".................................................................");
    printf("\n");
    
    printf("Number of car = %d\n", list.car_count);
    printf("Total Fare of car = %d\n", list.car_fare);
    printf(".................................................................");
    printf("\n");
    
    int total= list.bike_fare + list.bus_fare + list.car_fare;
    printf("\nTotal = %d\n", total);
    printf(".................................................................");
    printf("\n\n");
}