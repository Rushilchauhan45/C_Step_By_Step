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
    if( a > 10 || a == b || b < 10)
    {
        printf("\n\nfrom 3 One Condition is True...");
    }else
    {
        printf("\n\nAll Conditions is False...");

    }

    //AND
    if(a > 10  &&  a == b)
    {
        printf("\n\nAll Conditions is true...");
    }else
    {
        printf("\n\nFrom 2 one is False...");
    }

    //NOT
    if(!(a > b))
    {
        printf("\n\n a is Smaller than b (flase)..");
    }else
    {
        printf("\n\na Greater than b(flase)...");

    }

}//end of main function