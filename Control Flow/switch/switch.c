#include<stdio.h>

void main()
{
    //variable declaration
    int day;

    printf("Enter the Value(1 to 7):");
    scanf("%d", &day);

    /*
    switch(//variable)
    {
        case 1://executable part
        break;
        case 2://executable part
        break;
        case 3://executable part
        break;
        .
        .
        .
        case n://executable part
        break;

        default://if user input out of cases than run default case
    
    }
    */

    switch(day)
    {
        case 1:printf("\nMonday....");
        break;
        
        case 2:printf("\nTuesday....");
        break;

        case 3:printf("\nWednesday....");
        break;

        case 4:printf("\nThursday....");
        break;

        case 5:printf("\nFriday....");\
        break;

        case 6:printf("\nSaturday....");
        break;

        case 7:printf("\nSunday....");
        break;

        default:printf("\nInvalid Value...!!");
    }

}//end of main
