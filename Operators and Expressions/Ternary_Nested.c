/*
-->Implement Nested Coditional Ternary Operator
*/

#include<stdio.h>

void main()
{
    //variable declarations
    int a , b, c;

    //get values from user
    printf("Enter the values of a , b, c:");
    scanf("%d", &a);
    scanf("\n%d", &b);
    scanf("\n%d", &c);


    /*
    //Check Who is Bigger from 3
    if(a > b )
    {
        if(a > c)
        {
            printf("\n %d is Bigger...",a);
        }else
        {
            printf("\n %d is Bigger...",c);
        }
    }else
    {
        if(b > c)
        {
            printf("\n %d is Bigger...",b);
        }else
        {
            printf("\n %d is Bigger...",c);
        }
    }
    */

    //Convert Nested If-else into Nested Ternary Operator
    ((a>b)? (a>c)? printf("\n%d is Bigger..",a):printf("\n%d is Bigger",c): (b>c)? printf("\n%d is Bigger",b): printf("\n%d is Bigger",c));

}//end of main function