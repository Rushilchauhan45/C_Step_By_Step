/*
        Def : It's One Type of Conditional Operator....
        Syntax :  (Condition ? //Condition True msg : //Condition False msg )

--> It's Work Same As Like If-else Statement
*/


#include<stdio.h>

void main()
{
    //variable declaration`
    int a , b;

    //get values from uSer
    printf("Enter the value of the a and b :");
    scanf("%d \n %d", &a, &b);
    
    //Opertaion Using with Ternary Operator
    ((a > b) ? printf("\n%d is Bigger..",a) : printf("\n%d is Bigger..",b));

}//end of main function