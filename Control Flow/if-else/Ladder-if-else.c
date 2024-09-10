#include<stdio.h>

//sysntax of Ladder if-else statements
void main()
{
    int marks;

    printf("Enter the Makrs(out of 100) :");
    scanf("%d", &marks);

    /*
    -->ladder if-else used to check multiple conditions on one value

    if(//condition)
    {
    }else if(//condition)
    {
    }else if(//)
    {
    } n.....else if(//condition)
    {
    }else
    {
    }
    */

    if(marks>=90 && marks<=100)
    {
        printf("Grade: A+");
    }else if(marks>=80 && marks<=90)    
    {
        printf("Grade: A");
    }else if(marks>=70 && marks<=80)
    {
        printf("Grade: B+");
    }else if(marks>=60 && marks<=70)
    {
        printf("Grade: B");
    }else if(marks>=50 && marks<=60)
    {
        printf("Grade: C+");
    }else if(marks>=40 && marks<=50)
    {
        printf("Grade: D");
    }else
    {
        printf("Student is Fail...");
    }


}//end of main fucntion
