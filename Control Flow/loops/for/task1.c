//Sum of Numbers...
#include<stdio.h>

void main()
{
    //variable declaration
    int sum =0,Nsum,value;
    int i;

    printf("Enter the Number of Digit You Want to Sum :");
    scanf("%d",&Nsum);

    for(i=1 ; i<=Nsum ; i++)
    {
        printf("Enter the value for Sum:");
        scanf("%d",&value); 
        sum = sum + value; 
        //sum += value; (you Can Also write that)
    }

    printf("Sum : %d\n",sum);
}//end of main
