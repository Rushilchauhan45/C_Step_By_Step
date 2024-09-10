//Vowel or Consonant Checker
#include<stdio.h>

void main()
{
    //variable declaration
    char value;

    printf("Enter the Character to check to check Vowel or Consonant:");
    scanf("%c", &value);

    //Using with Simple if-else
    // Vowel---> a e i o u 
    if(value == 'a' || value=='A' || value == 'e' || value=='E' || value == 'i' || value=='I' || value == 'o' || value=='O' || value == 'u' || value=='U')
    {
        printf("%c is Vowel....",value);
    }else
    {
        printf("%c is Consonant....",value);
    }

}//end of main