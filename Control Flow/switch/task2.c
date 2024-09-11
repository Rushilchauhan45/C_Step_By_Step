#include <stdio.h>

void main()
{
    // Variable declaration
    int base_currency, target_currency;
    double amount, converted_amount;

    // Set values of currency conversion rates
    double usd_to_inr = 83.94, usd_to_jpy = 140.98, usd_to_eur = 0.91;
    double inr_to_usd = 0.012, inr_to_jpy = 1.68, inr_to_eur = 0.011;
    double jpy_to_usd = 0.0071, jpy_to_inr = 0.60, jpy_to_eur = 0.0064;
    double eur_to_usd = 1.10, eur_to_jpy = 155.95, eur_to_inr = 92.74;

    // Display currency options and get base currency
    printf("\n----------------------------------------");
    printf("\n       Currency Converter Machine");
    printf("\n----------------------------------------");
    printf("\n!!.....Select Your Base Currency.....!!");
    printf("\n1-->USD");
    printf("\n2-->INR");
    printf("\n3-->JPY");
    printf("\n4-->EUR");
    printf("\nEnter your choice: ");
    scanf("%d", &base_currency);

    // Get amount from user
    printf("\nEnter Amount: ");
    scanf("%lf", &amount);

    // Display target currency options and get target currency
    printf("\n!!.....Select Your Target Currency.....!!");
    printf("\n1-->USD");
    printf("\n2-->INR");
    printf("\n3-->JPY");
    printf("\n4-->EUR");
    printf("\nEnter your choice: ");
    scanf("%d", &target_currency);

    // Currency conversion using switch statement
    switch (base_currency)
    {
        case 1: // Base currency --> USD
            switch (target_currency)
            {
                case 1: converted_amount = amount; 
                break; // USD to USD
                case 2: converted_amount = amount * usd_to_inr; 
                break; // USD to INR
                case 3: converted_amount = amount * usd_to_jpy; 
                break; // USD to JPY
                case 4: converted_amount = amount * usd_to_eur; 
                break; // USD to EUR
                default: printf("\nInvalid Target Currency Choice!"); 
                return;
            }
            break;

        case 2: // Base currency --> INR
            switch (target_currency)
            {
                case 1: converted_amount = amount * inr_to_usd; 
                break; // INR to USD
                case 2: converted_amount = amount; 
                break; // INR to INR
                case 3: converted_amount = amount * inr_to_jpy; 
                break; // INR to JPY
                case 4: converted_amount = amount * inr_to_eur; 
                break; // INR to EUR
                default: printf("\nInvalid Target Currency Choice!"); 
                return;
            }
            break;

        case 3: // Base currency --> JPY
            switch (target_currency)
            {
                case 1: converted_amount = amount * jpy_to_usd;
                break; // JPY to USD
                case 2: converted_amount = amount * jpy_to_inr; 
                break; // JPY to INR
                case 3: converted_amount = amount; 
                break; // JPY to JPY
                case 4: converted_amount = amount * jpy_to_eur; 
                break; // JPY to EUR
                default: printf("\nInvalid Target Currency Choice!"); 
                return;
            }
            break;

        case 4: // Base currency --> EUR
            switch (target_currency)
            {
                case 1: converted_amount = amount * eur_to_usd; 
                break; // EUR to USD
                case 2: converted_amount = amount * eur_to_inr; 
                break; // EUR to INR
                case 3: converted_amount = amount * eur_to_jpy; 
                break; // EUR to JPY
                case 4: converted_amount = amount; 
                break; // EUR to EUR
                default: printf("\nInvalid Target Currency Choice!"); 
                return;
            }
            break;

        default:
            printf("\nInvalid Base Currency Choice!");
            return;
    }

    // Print the converted amount
    printf("\nOriginal Amount: %.2lf", amount);
    printf("\nConverted Amount: %.2lf\n", converted_amount);
}
