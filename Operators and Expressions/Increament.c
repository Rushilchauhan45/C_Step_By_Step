#include<stdio.h>

void main()
{
    //variable declaration
    int a=2;
    int result;

    //Increament Operator
    /*
    Syntax --> ++variable; (Pre Increament)
           --> Variable++; (Post Increament)  
    */

    result = ++a; //Pre Increament

    printf("Pre - increament : %d\n", result);
    printf("Pre -increment(a) : %d\n", a);

    result = a++ ; //Post Increament

    printf("Post - increament : %d\n", result);
    printf("Post -increment(a) : %d\n", a);
}//end of main fun