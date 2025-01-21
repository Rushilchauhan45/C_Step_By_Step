//Check the Valid Number 

#include <stdio.h>

void main()
{
    int num;

    do
    {
        printf("\nEnter a number: ");
        scanf("%d", &num);

        if(num<=0)
        {
            printf("Invalid Number!Please Enter Positive Number...");
        }
    }while(num<=0);
    
    printf("Valid Number!");
        
}//end of main