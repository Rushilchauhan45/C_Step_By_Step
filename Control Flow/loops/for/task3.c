//Find Prime Number..
#include<stdio.h>

void main()
{
    //variable declarations
    int i , flag = 1 , num;
    int factor_count = 0;

    //get Number from User
    printf("Enter the Number:");
    scanf("%d",&num);

    //2
    // Check for prime
    if(num<=1)
    {
        flag = 0;//not prime
    }else
    {
        //check for prime
        for(i = 2 ; i<=num/2;i++)
        {
            if(num % i == 0)
            {
                flag = 0;//not prime
                break; 
            }
        }//end of inner for 
    }

    /*
    -->prime has only two factor 
    */
    
   
    for(i = 1 ; i<=num ;)
    {
        if(num % i == 0)
        {
            factor_count++; 
        }
        i++;
    }//end of inner for 

    printf("Factor :%d",factor_count);
    //print the prime number
    if(flag)
    {
        printf("\n%d is Prime...",num);
    }else
    {
        printf("\n%d is Not Prime...",num);
    }
}//end of main