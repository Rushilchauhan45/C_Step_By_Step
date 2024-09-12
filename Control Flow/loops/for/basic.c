#include<stdio.h>

void  main()
{
    //variable declaration
    int i;

    /*
    [type 1]

    for(//intialize ; //condition ; // increament/decrement )
    {
        //lines of code
    }
    */
    for(i =0 ; i < 10 ; i++)
    {
        printf("\nLoop Execution :%d",i);
    }

    /*
    [type 2]

    //intialize
    for( ; //condition ; // increament/decrement )
    {
        //lines of code
    }
    */
    i =0; 
    for(; i < 10 ; i++)
    {
        printf("\nLoop Execution :%d",i);
    }

    /*
    [type 3]

    //intialize
    for( ; //condition ; )
    {
        //lines of code
        // increament/decrement 
    }

    */
    i =0; 
    for(; i < 10 ;)
    {
        printf("\nLoop Execution :%d",i);
         i++;
    }

    

}//end of main