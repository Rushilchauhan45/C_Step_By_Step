#include<stdio.h>

void main()
{
    //variable declaratio
    int a =98; //1100010 
    int b =45; //101101 
    
    
    /*
        BITWISE Operator = AND (&), XOR (^) , OR(|), NOT (~), Left shift (<<), Right shift (>>)
        Bitwise Operators Use For Want Bit wise operations
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
         a  ----> 1100010    
         b  ----> 0101101
         -----------------
         111<-----1101111
    */

    printf("a | b : %d\n", a | b);

    /*
         NOT(~)--> ~a (Operation)
         -->NOT Operator Always Throw a Negative Value  
         b  ---->  101101   + 1   
         -------------------------
         46 <----  1011011   
    */

    printf("~b : %d\n", ~b );

    /*
        Right Shift (>>) --> b >> 2 (Operation)
        --> Shifts bits of b two positions to the right
        --> Divides the number by 2^2 = 4
        b  ----> 00101110 (binary for 46)
        -------------------------
        Result after shifting two bits right:
        11 <---- 00001011 (which is 11 in decimal)
    */
    
    printf("b >> 2 : %d\n", b >> 2); // Right shift by 2

     /*
        Left Shift (<<) --> b << 2 (Operation)
        --> Shifts bits of b two positions to the left
        --> Multiplies the number by 2^2 = 4
        b  ----> 00101110 (binary for 46)
        -------------------------
        Result after shifting two bits left:
        184 <---- 10111000 (which is 184 in decimal)
    */
    
    printf("b << 2 : %d\n", b << 2); // Left shift by 2

}//end of main function
