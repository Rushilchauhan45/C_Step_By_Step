//Pattern task
#include<stdio.h>

void main()
{
    //variable declaration
    int i,j,k;

    /*
        *
       * * 
      * * *
     * * * *  
    * * * * *  
    */
    for(i=0;i<5;i++)
    {
        for(k=(5-i);k>=0;k--)
        {
            printf(" ");
        }

        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    /*
         * * * * * 
          * * * * 
           * * *
            * *
             *  
    */
    for(i=5;i>0;i--)
    {
        for(k=(5-i);k>=0;k--)
        {
            printf(" ");
        }

        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}//end of main