//Check if a Number is Positive, Negative, or Zero

#include<stdio.h>

void main()
{
    //variable declaration
    float num;

    printf("Enter the Number :");
    scanf("%f",&num);

    //nested if-else
    if(num == 0)
    {
        printf("\n%.2f is Zero....",num);
    }else
    {
        if(num > 0)
        {
            printf("\n%.2f is Positive....",num);
        }else
        {
            printf("\n%.2f is Negative....",num);
        }

    }
}//end of main