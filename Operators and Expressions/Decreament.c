#include<stdio.h>

void main()
{
    //variable declaration
    int a=4;
    int result;

    //Decreament Operator
    /*
    Syntax --> --variable; (Pre Decreament)
           --> Variable--; (Post Decreament)  
    */

    result = --a; //Pre Decreament

    printf("Pre - Decreament : %d\n", result);
    printf("Pre -Decrement(a) : %d\n", a);

    result = a-- ; //Post Decreament

    printf("Post - Decreament : %d\n", result);
    printf("Post -Decrement(a) : %d\n", a);
}//end of main fun
