//Sum of Numbers...
#include<stdio.h>

void main()
{
    //variable declaration
    int sum =0,Nsum,value;
    int i;

    printf("Enter the Number of Sum :");
    scanf("%d",&Nsum);

    for(i=1 ; i<=Nsum ; i++)
    {
        printf("Enter the value:");
        scanf("%d",&value); 
        sum = sum + value; 
    }

    printf("Sum : %d\n",sum);
}//end of main