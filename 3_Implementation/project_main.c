#include "inc\header.h"

void main()
{
    int choice;
    do
    {
        menu();
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: add_bus(); 
                break;
        
        case 2: add_car(); 
                break;
        
        case 3: add_bike(); 
                break;
        
        case 4: display(); 
                break;
        
        case 5: Reduce_Count(); 
                break;
        
        case 6: printf("------------ THANK YOU ------------");
                break;

        default: printf("invalid option try again\n");
        
        }

    } while (choice!=6);
    
}