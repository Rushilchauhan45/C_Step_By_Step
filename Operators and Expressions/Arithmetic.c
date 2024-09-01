#include<stdio.h>

void main()
{
    //variable declaration
    int  a , b ,c ,d;

    printf("Enter the values of a and b :");

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d); //1st way 
    scanf("%d\t%d", &a,&b); //Horiszontal

    //2nd way
    printf("Enter the values of c and d :");
    scanf("%d\n%d",&c,&d); 
    //vertical
   
}