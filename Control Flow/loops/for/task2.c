//Printing Pattern
#include<stdio.h>

void main()
{
    //variable declaration
    int i ,j;

    /*
          i = row
          j = column

             i i i      
          j  * * * 
          j  * * *  
          j  * * * 

    */

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("* ");
        }//inner for loop
        printf("\n");
    }//outer for loop
    
    /*
          i = row
          j = column

             i i i i i i i      
          j  * * * * * * *
          j  * * * * * * * 
          j  * * * * * * *

    */

    printf("\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=7;j++)
        {
            printf("* ");
        }//inner for loop
        printf("\n");
    }//outer for loop

    /*
          i = row
          j = column

             i       
          j  *  
          j  * *   
          j  * * *
          j  * * * * 
          j  * * * * *

    */

    printf("\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }//inner for loop
        printf("\n");
    }//outer for loop

    /*
          i = row
          j = column

           i
         j * * * * * 
         j * * * *
         j * * * 
         j * *
         k *
          
    */

    printf("\n");
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }//inner for loop
        printf("\n");
    }//outer for loop
    
}//end of main
