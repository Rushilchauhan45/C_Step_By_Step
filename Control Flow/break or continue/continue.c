//A Prohram To Understand Continue Statement
#include <stdio.h>

void main()
{
    printf("ODD Numbers Between 1 to 20:\n");

    for(int i=1; i<=20; i++)
    {
        if(i%2==0)//Skip The Even Numbers And Continue for ODD Numbers
        {
            continue;
        }
        printf("%d\n",i);
    }//end of for
    printf("Exit From Program.....\n");
}//end Program