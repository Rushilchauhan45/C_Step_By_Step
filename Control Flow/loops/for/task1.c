// Find Fibbonacci Series 
// Series: 0 1 1 2 3 4 5 8 13 21 34

#include <stdio.h>

void main()
{
        //variable declaration
        int a=0 , b=1;
        printf("Fibbonacci series: %d %d",a,b);

        for(int i=3 ; i<=20;i++)
        {
            int next ;
            next = a + b; //next = 13 ; 
            printf(" %d",next);  // 8 + 13
            a = b;
            b = next;
            
        }
}//end of main method