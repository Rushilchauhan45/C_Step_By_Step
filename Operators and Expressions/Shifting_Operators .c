#include<stdio.h>

void main()
{
    //variable declaratio
    int a =98; //1100010 
    int b =46; //00101110  
    

    /*
        Shifting Operator = Left shift (<<), Right shift (>>)
        
    */

    /*
        Right Shift (>>) --> b >> 2 (Operation)
        --> Shifts bits of b two positions to the right
        b  ----> 00101110 (binary for 46)
        -------------------------
        Result after shifting two bits right:
        44 <---- 00101100 (which is 44 in decimal)
    */
    
    printf("b >> 2 : %d\n", b >> 2); // Right shift by 2

     /*
        Left Shift (<<) --> b << 2 (Operation)
        --> Shifts bits of b two positions to the left
        b  ----> 00101110 (binary for 46)
        -------------------------
        Result after shifting two bits left:
        139 <----10001011 (which is 139 in decimal)
    */
    
    printf("b << 2 : %d\n", b << 2); // Left shift by 2

}//end of main function
