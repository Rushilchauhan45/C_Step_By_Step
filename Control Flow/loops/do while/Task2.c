//Guess The Number...

#include <stdio.h>
#include <time.h>//time()
#include <stdlib.h>//srand()

void main()
{
    int number , guess;

    //builtin function for generate random integer
    srand(time(0));//-->Sub Function rand()
    number = rand() % 100 + 1;//-->Generate random number between 1 to 100
    

    printf("Guess The Number Between 1 to 100.....\n");
    do
    {
        printf("\n\nEnter the Guessing Number:");
        scanf("%d",&guess);

        if(guess < number)
        {
            printf("Too Low!Try again....");
        }else if(guess > number)
        {
            printf("Too High!Try again....");
        }else
        {
            printf("You guess The Right Number!...%d",guess);
        }
    }while(guess!=number);
}