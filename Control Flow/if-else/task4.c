//Prime Number Checker
#include <stdio.h>

void main()
{
    //variable declarations
    int num;
    int flag = 1;

    printf("Enter the Number To Check Prime or Not:");
    scanf("%d", &num);

    //if-else statement
    /*
        Prime Number--->The Number has only 2 factors 
        11 x 1
        1 x 11 
    */

    if(num > 1)
    {
        // check for prime
        if(num == 2)
        {
            printf("\n%d is Prime",num);
            
        }else if(num % 2 == 0)
        {
            flag = 0;
        }else
        {
            flag = 1;
        }
    
    }else 
    {
        printf("\n%d is not valid to check prime...",num);
    }

    //print prime number using with flag
    if(flag)
    {
        printf("\n%d is prime",num);
    } else
    {
        printf("\n%d is not prime",num);
    }

}//end of main