#include<stdio.h>

/**
 * @file header.h
 * @author Prasun Kumar
 * @brief Header file for parking system
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __HEADER_H__
#define __HEADER_H__

/**
 * @brief structure to store the vehicle count and cost of parking
 * 
 */
struct vehicle
{
    int car_count, bus_count, bike_count;
    int bus_fare, car_fare, bike_fare;
}list;



/**
 * @brief function to display number of vehicles and their total fare
 * 
 */
void display();

/**
 * @brief function to reduce the count of vehicle 
 * 
 * @return int
 */
int Reduce_Count();

/**
 * @brief function to add a bike in the parking lot
 * 
 * @return int 
 */
int add_bike();

/**
 * @brief function to add a car in the parking lot
 * 
 * @return int
 */
int add_car();

/**
 * @brief function to add a bus in the parking lot
 * 
 * @return int
 */
int add_bus();

/**
 * @brief function to display the menu
 * 
 */
void menu();

#endif /*  __HEADER_H__  */
