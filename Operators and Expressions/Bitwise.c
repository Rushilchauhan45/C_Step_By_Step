#include<stdio.h>

void main()
{
    //variable declaratio
    int a =56; //111000  
    int b =34; //100010 
    
    
    /*
        BITWISE Operator = AND (&) , OR(|), NOT (~), XOR (^)
        Bitwise Operators Use For Perform Bit wise operations
    */
    /*
        AND(&)--> a & b (Operation)  
         a  ----> 111000    
         b  ----> 100010
         -----------------
         32<----- 100000
    */

    printf("Bitwise Operations:\n ");
    printf("a & b : %d\n", a & b);

    /*
         OR(|)--> a | b (Operation)  
         a  ----> 111000    
         b  ----> 100010
         -----------------
         58<----- 111010
    */
    
    printf("a | b : %d\n", a | b);

    /*
         NOT(~)--> ~a (Operation)
         -->NOT Operator Always Throw a Negative Value  
         b  ---->  100010  + 1   
         -------------------------
         35<----  100011   
    */

    printf("~b : %d\n", ~b );

    /*
         XOR(^)--> a ^ b (Operation)  
         a  ----> 111000    
         b  ----> 100010
         -----------------
         26 <-----011010
    */

    printf("a ^ b : %d\n", a ^ b);
    
}//end of main function
