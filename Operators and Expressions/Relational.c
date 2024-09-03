#include<stdio.h>

void main()
{
    int a , b;

    printf("Enter the values of a and b :");
    scanf("%d \n %d", &a, &b);

    // < > <= >= <> != == =
    // if - else statement (Based On True(1) or False(0))
    // Syntax  
    /*
        if(Condition)
        {
            //Executable part
        }else
        {
            //Executable part
        }
    */
   //problem : a > b 

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


