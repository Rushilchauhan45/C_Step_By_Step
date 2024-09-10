#include<stdio.h>

//Simple Syntax of if-else
void main()
{
    //variable declaration
    int a , b;

    printf("Enter the value of a and b:");
    scanf("%d\n%d", &a, &b);

    /*
    [type 1:]
    -------
    -->This if-else syntax used for mutiple executable lines of code...
    if(//condition)
    {
        //executable part
    }else
    {
        //executable part
    }
    */

    if(a>b)
    {
        //executable part
        printf("%d is Bigger than %d",a,b);
    }else
    {
        //executable part
        printf("%d is Smaller than %d",a,b);
   }
   
   /*   
    [type 2:]
    ---------
    -->This if-else syntax used for Only One Line of Code...
    if(//codition)
        //one line of code..
    else
        //one line of code..    
    
    */
    if(a>0)
        //one line of code..
        printf("%d is Positive",a);
    else
        //one line of code..
        printf("%d is Negative",a);

}//end of main