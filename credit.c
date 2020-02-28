#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to enter credit card number //
    long cc_number;
    do
    {
        cc_number = get_long("Enter your credit card number\n");
    }
    while (cc_number < 0);

    // Count number of digits
    int size_counter = 0; // used to keep track of digits number//
    long ccsize = cc_number; //used for calculation 
    while (ccsize > 0)
    {
        ccsize = ccsize / 10;
        size_counter ++;
    }

    // identify credit card digits separately //
    int digit1 = cc_number % 10;
    int digit2 = (cc_number % 100 / 10);
    int digit3 = (cc_number % 1000 / 100);
    int digit4 = (cc_number % 10000 / 1000);
    int digit5 = (cc_number % 100000 / 10000);
    int digit6 = (cc_number % 1000000 / 100000);
    int digit7 = (cc_number % 10000000 / 1000000);
    int digit8 = (cc_number % 100000000 / 10000000);
    int digit9 = (cc_number % 1000000000 / 100000000);
    int digit10 = (cc_number % 10000000000 / 1000000000);
    int digit11 = (cc_number % 100000000000 / 10000000000);
    int digit12 = (cc_number % 1000000000000 / 100000000000);
    int digit13 = (cc_number % 10000000000000 / 1000000000000);
    int digit14 = (cc_number % 100000000000000 / 10000000000000);
    int digit15 = (cc_number % 1000000000000000 / 100000000000000);
    int digit16 = (cc_number % 10000000000000000 / 1000000000000000);

    // Calculate CheckSum //
    int csum2 = digit2 * 2;
    csum2 = csum2 % 10 + (csum2 % 100 / 10); 
    int csum4 = digit4 * 2;
    csum4 = csum4 % 10 + (csum4 % 100 / 10); 
    int csum6 = digit6 * 2;
    csum6 = csum6 % 10 + (csum6 % 100 / 10); 
    int csum8 = digit8 * 2;
    csum8 = csum8 % 10 + (csum8 % 100 / 10);
    int csum10 = digit10 * 2;
    csum10 = csum10 % 10 + (csum10 % 100 / 10); 
    int csum12 = digit12 * 2;
    csum12 = csum12 % 10 + (csum12 % 100 / 10); 
    int csum14 = digit14 * 2;
    csum14 = csum14 % 10 + (csum14 % 100 / 10); 
    int csum16 = digit16 * 2;
    csum16 = csum16 % 10 + (csum16 % 100 / 10);

    int check_sum = digit1 + csum2 + digit3 + csum4 + digit5 + csum6 + digit7 + csum8 + digit9 + csum10 + digit11 + csum12 + digit13 + csum14 + digit15 + csum16;

    //Control validity card number//
        //CheckSum//
    if (check_sum % 10 != 0)
    {
        printf("INVALID\n");
    }
        //Length//
    else if (size_counter < 13 || size_counter > 16)
    {
        printf("INVALID\n");
    }

    //Identify credit card type//
        //AMEX//
    int begamex = cc_number / 10000000000000; // Variable identifying 2 first digit from credit card //
    if (size_counter == 15)
    {
        if (begamex == 34 || begamex == 37)
        printf("AMEX\n");
        else
        printf("INVALID\n");
    }
        //MasterCard//
    int begmaster = cc_number / 100000000000000; // Variable identifying 2 first digit from credit card //
    if (size_counter == 16)
    {
        if (begmaster == 51 || begmaster == 52 || begmaster == 53 || begmaster == 54 || begmaster == 55)
        {
            printf("MASTERCARD\n");
        }
        else if (begmaster < 21 || begmaster > 55)
        {
            printf("INVALID\n");
        }
    }
        //Visa//
    if (size_counter == 13)
    {
        if (digit13 == 4)
        {
            printf("VISA\n");
        }
    }
    else if (size_counter == 16)
    {
        if (digit16 == 4)
        {
            printf("VISA\n");
        }
    }
}
