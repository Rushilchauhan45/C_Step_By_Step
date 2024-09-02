#include<stdio.h>

void main()
{
    //variable declaration
    int a, b;
    int add , sub , mul ,div,mod;
    

    printf("Enter the value of a and b :");
    scanf("%f \n %f",&a,&b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    printf("\nAddition : %d",add);
    printf("\nSubtraction : %d",sub);
    printf("\nMultiplication : %d",mul);
    printf("\nDivision : %.2f",div);
    printf("\nModule : %d",mod);

}