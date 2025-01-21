//Execute While(1) [Infinte loop]

#include<stdio.h>
#include<process.h>

void main()
{
    int choice ;

   
        while(1)//infinite loop
        {
        printf("\nEnter a number between 1 and 5: ");
        printf("\nEnter 6 for Exit Loop:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 6:exit(0);
                break;
            case 1:
                printf("You entered 1\n");
                break;
            case 2:
                printf("You entered 2\n");
                break;
            case 3:
                printf("You entered 3\n");
                break;
            case 4:
                printf("You entered 4\n");
                break;
            case 5:
                printf("You entered 5\n");
                break;
            default:
                printf("Invalid number\n");    
        }
        }//end of while loop
    
}
