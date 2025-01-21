//Basic Example of do while loop

#include <stdio.h>

void main()
{
    int i = 0;
    do
    {
        printf("Value of i is %d\n", i);
        i++;
    } while (i < 5);
    
    printf("Loop exited\n");
}