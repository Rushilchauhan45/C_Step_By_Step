//Fibbonacci series using with While Loop

#include <stdio.h>

void main()
{
    //varibale declaration
    int num;
    int first = 0,second = 1, next=0;
    printf("Enter The Number Of Terms Fibonacci Series: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");
    while(num > 0)
    {
        printf(" %d",next);
        first = second;
        second = next;
        next = first + second;
        num--;

    }

}//end of mai  method