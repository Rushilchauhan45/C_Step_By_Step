#include<stdio.h>

//sysntax of Nested if-else statement
void main()
{
    //variable declaration
    int a, b, c;

    printf("Enter the values of a , b, c:");
    scanf("%d \n %d \n %d",&a, &b, &c);

    /*
    -->Nested means inner conditions
    if()
    {
        //nested condition
        if()
        {
            //execulable part
        }else
        {
            //execulable part
        }
    }else
    {
        //nested condition
        if()
        {
            //execulable part
        }else
        {
            //execulable part
        }
    
    }//outer if-else 
    */

    //implement nested condition
    if(a>b)
    {
        if(a>c)
        {
            printf("\n%d is Bigger All...",a);
        }else
        {
            printf("\n%d is Bigger All...",c);
        }
    }else
    {
        if(b>c)
        {
            printf("\n%d is Bigger All...",b);
        }else
        {
            printf("\n%d is Bigger All...",c);
        }
    }
}//end of main fucntion