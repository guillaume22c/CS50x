#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Check key is only one string //
    if (argc == 2)
    {
        int n = strlen(argv[1]);
        printf("length: %i\n", n);
        int i;
        for (i = 0; i < n; i++)
        {
            // Check key is only composed of decimal digits //
            if (isdigit(argv[1][i]))
            {
                bool key = true;
            }
            else
            {
                bool key = false;
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        // Convert key into integer //
        int k = atoi(argv[1]);

        // Prompt user for plain text //
        string plain = get_string("plain text: ");

        // Print ciphertext //
        int plain_length = strlen(plain);
        string cipher = plain;
        for (int j = 0 ; j < plain_length ; j++)
        {
            if(isalpha(plain[j]) && islower(plain[j]))
                {
                    cipher[j] = ((plain[j]- 96 + k) % 26) + 96;
                }
            if(isalpha(plain[j]) && isupper(plain[j]))
            {
               if((plain[j] + k) <= 90)
                    {
                        cipher[j] = (plain[j] + k);
                    }
                if((plain[j] + k) > 90)
                    {
                        cipher[j] = ((plain[j]- 64 + k) % 26) + 64;
                    }
            }
        }
        printf("ciphertext: %s\n", cipher);
    }

    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}