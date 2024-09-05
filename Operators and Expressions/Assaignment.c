#include<stdio.h>

//main function 
void main()
{
    //variable declaration
    int a = 10;

    //Assaignmnment Operators : = += -= *= /= %=
    // Asigning Value (Right to Left)
    
    // a =10;
    a += 5; // a = 15
    printf("Value : %d",a);
    
    a -= 2; // a = 13
    printf("Value : %d",a);
    
    a *= 20; // a = 260
    printf("Value : %d",a);
    
    a /= 5; // a = 52
    printf("Value : %d",a);
    
    a %= 3; // a = 1 
    printf("Value : %d",a);

}
