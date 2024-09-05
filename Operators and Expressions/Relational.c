#include<stdio.h>

void main()
{
    //variable declaration
    int a , b;

    printf("Enter the values of a and b :");
    scanf("%d \n %d", &a, &b);

    // Relational Operators : < > <= >= <> != == =
    // if - else statement (Based On True(1) or False(0))
    // Syntax  
    /*
        if(Condition)
        {
            //Executable part
            break;
        }else
        {
            //Executable part
        }
    */
    

   if(a > b)
   {
        //true (1)
        printf("\n\n %d is Bigger than %d....",a,b);
   }else
   {
        //false (0)
        printf("\n\n %d is Smaller than %d....",a,b);

   }

}//end of main


