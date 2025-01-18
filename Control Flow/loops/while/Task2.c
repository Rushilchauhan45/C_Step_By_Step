//Find Reverse Number Using with while Loop

#include <stdio.h>

void main()
{
    int num;
    int reverse_num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        int remainder = num%10 ;
        reverse_num = reverse_num*10 + remainder;
        num = num/10;  
    }

}//end og main method