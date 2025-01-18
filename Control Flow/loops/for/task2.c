//Printing Pattern
#include<stdio.h>

void main()
{
    //variable declaration
    int i ,j;

    /*
          i = row
          j = column

             j j J      
          i  * * * 
          i  * * *  
          i  * * * 

    */

    for(i=1;i<=5;i++)//printing rows
    {
        for(j=1;j<=5;j++)//printing columns
        {   
            printf("* ");
        }//inner for loop
    printf("\n");
    }//outer for loop

   /*
          i = row
          j = column

             j j j j j j j     
          i  * * * * * * *
          i  * * * * * * * 
          i  * * * * * * *

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
         j *
          
   
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
