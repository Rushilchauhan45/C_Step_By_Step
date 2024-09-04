#include<stdio.h>

//main fucntion starting
void main()
{
    //variable declaration
    int a , b;

    printf("Enter the values of a and b:");
    scanf("%d \n %d", &a, &b);

    //logical Operators : AND (&&) , OR (||) , NOT (!)
    //OR 
    if(a > b || a == b || a == 10)
    {
        //true (1)
        printf("\n\nFrom 2 is One condtion is true....");
    }else
    {
        //False (0)
        printf("\n\nFrom 2 is One condtion is true....");
    }

    //AND
    if(a > b && a == 12)
    {
        //true (1)
        printf("\n\nAll Conditions Is True....");
    }else
    {
        //false (0)
        printf("\n\nAll condition is False....");
    }

    //NOT
    if( !(a > b))
    {
        //true(1)
        printf("\n\n a is Bigger than b ...(false)");
    }else
    {
        //false (0)
        printf("\n\n a is Not Bigger than b ....(True)");
    }

}//end of main function