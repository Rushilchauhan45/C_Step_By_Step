//Even or Odd Number Checker
#include<stdio.h>

void main()
{
    //variable declaration
    int num;

    printf("Enter the Number:");
    scanf("%d",&num);

    /*
        Check Even or Odd....
        num % 2 == 0 ---> even number
    */
    //ladder if-else statement
    if(num == 0)
    {
        printf("\n Enter Valid Number...");
    }else if(num % 2 == 0)   
    {
        printf("\n%d is Even...",num); 
    }else
    {
        printf("\n%d is Odd...",num); 
    }


}//emd of main