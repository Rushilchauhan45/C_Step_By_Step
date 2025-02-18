//program to understrands goto statement

#include <stdio.h>

void main()
{
    //block of code
    int num;
    
    start:
    
    printf("Enter the Number :");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("The number is even\n");
        
    }
    else
    {
        printf("The number is odd\n");
        
    }
    goto start;//goto start and execute block after start: lable called

}//end of program