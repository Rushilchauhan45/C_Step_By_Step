#include<stdio.h>

void main()
{
    //variable declaration
    float a, b;
    float add , sub , mul , div , modulo;
    
    /*
    Arithmetic Operators : + , - , * , / , %
    */
    printf("Enter the value of a and b :");
    scanf("%f %f" ,&a , &b );

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    //modulo = a % b;

    printf("\nAddition : %.2f",add);
    printf("\nSubtraction : %.2f",sub);
    printf("\nMultiplication : %.2f",mul);
    printf("\nDivision : %.2f",div);
    printf("\nModule : %.2f",modulo);

}