#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // CONTROL KEY VALIDITY //
    // Check only one string key //
    if (argc != 2)
    {
        printf("Substitution key unvalid\n");
        return 1;
    }
    // Check size key - 26 caracters //
    int key_size = strlen(argv[1]);
    if (key_size != 26)
    {
        printf("Substitution key unvalid\n");
        return 1;
    }
    // Check key is alphabetic caratcters only //
    for (int i = 0 ; i < key_size ; i++)
    {
        if (isalpha(argv[1][i]))
        {
            bool key = true;
        }
        else
        {
            bool key = false;
            printf("Substitution key unvalid\n");
            return 1;
        }
    }
    // Check no caracter duplication in key - case insensitive //
    for (int i = 0 ; i < key_size ; i++)
    {
        for (int j = i+1 ; argv[1][j] != '\0' ; j++)
        {
            if ((argv[1][j]) == (argv[1][i]))
            {
                printf("Substitution key unvalid\n");
            }
        }
    }
    // Prompt user to enter Plain text //
    string plain_text = get_string("plaintext: ");

    // Convert plain text into ciphertext
    int plain_size = strlen(plain_text);
    printf("ciphertext: ");
    

    for (int k = 0 ; k < plain_size ; k++)
    {
        if (isalpha(plain_text[k]) == 0)
        {
            printf("%c", plain_text[k]);
        }
        for (int l = 0 ; l < 26 ; l++)
        {
            if (isalpha(plain_text[k]) && islower(plain_text[k]) && (plain_text[k]) == 'a' + l)
            {
                printf("%c", tolower(argv[1][l]));
            }
            if (isalpha(plain_text[k]) && isupper(plain_text[k]) && (plain_text[k]) == 'A' + l)
            {
                printf("%c", toupper(argv[1][l]));
            }
        }
    }
    printf("\n");
}
