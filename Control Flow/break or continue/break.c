//program to understand Break Statement...
#include <stdio.h>


void main()
{
    //loop-1
    for(int i=1;i<=10;i++)
    {
       if(i == 5)
       {
            printf("\nBreak On 5th Itretion And Move On Loop-2\n");
            break;
       } 
       printf("%d\n",i);
    }

    //Loop-2
    for(int i=1;i<=10;i++)
    {
        if(i == 7)
        {
            printf("\nBreak On 7th itretion And Move On Loop-3\n");
            break;
        }
       printf("%d\n",i);

    }//end of loop

    //Loop-3
    for (int i = 1; i <=10; i++)
    {
        if(i == 2)
        {
            printf("\nExit From Execution..");
            break;
        }
       printf("%d\n",i);

    }//end of loop
    
}//end of program