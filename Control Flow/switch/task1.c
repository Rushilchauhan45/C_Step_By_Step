//Simple Calculator Using with Switch case
#include<stdio.h>
#include<math.h>

void main()
{
    //variable declaration
    int choice;
    float add ,sub, mul, div ,squareroot,square;
    float a,b;

    printf("\n----------------------------");
    printf("\n         Calculator");
    printf("\n----------------------------");
    printf("\n1--->Addition");
    printf("\n2--->Subtraction");
    printf("\n3--->Multiplication");
    printf("\n4--->Divison");
    printf("\n5--->Square root");
    printf("\n6--->Square");
    printf("\nEnter the choice:");
    scanf("%d",&choice);

    //complete All Operations using with switch case
    switch(choice)
    {
        case 1: printf("Enter value of a and b :");
                scanf("%f \n %f",&a,&b);

                add = a+b;

                printf("Addition :%.2f",add);
        break;
        case 2: printf("Enter value of a and b :");
                scanf("%f \n %f",&a,&b);

                sub = a-b;

                printf("Subtraction:%.2f",sub);
        break;
        case 3: printf("Enter value of a and b :");
                scanf("%f \n %f",&a,&b);

                mul = a*b;

                printf("Multiplication :%.2f",mul);
        break;
        case 4: printf("Enter value of a and b :");
                scanf("%f \n %f",&a,&b);

                div = a/b;

                printf("Divison :%.2f",div);
        break;
        case 5: printf("Enter the value:");
                scanf("%f",&a);

                squareroot = sqrt(a);   

                printf("Square root :%.2f",squareroot);
        break;
        case 6: printf("Enter the value:");
                scanf("%f",&a);

                square = pow(a,2);   

                printf("Square :%.2f",square);
        break;

        default:printf("\nEnter the valid choice..."); 
    }







}//end of main