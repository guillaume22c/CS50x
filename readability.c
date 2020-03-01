#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // Prompt user to input text //
    string text = get_string("Text: ");

    // Count length of text //
    int text_long = strlen(text);
    printf("%i\n", text_long);

    // Count nbr caracters in text //
    int nbr_letters = 0;
    for (int i = 0 ; i < text_long ; i++)
    {
         if (isalnum(text[i]))
         nbr_letters++;
    }
    printf("%i\n", nbr_letters);

    // Count nbr of words //
    int nbr_words = 1;
    for (int i = 0 ; i < text_long ; i++)
    {
        if (isspace(text[i]) && isalnum(text[i+1]))
        nbr_words++;
    }
    printf("%i\n", nbr_words);

    // Count nbr of sentences //
    int nbr_sentences = 0;
    for (int i = 0 ; i < text_long ; i++)
    {
        if ((text[i] == '.' || text[i] == '?' || text[i] == '!') && isalnum(text[i-1]))
        nbr_sentences++;
    }
    printf("%i\n", nbr_sentences);

    // Calculate readability index //

    float average_letters = 100 * nbr_letters / nbr_words;
    float average_sentences = 100 * nbr_sentences / nbr_words;

    int index = 0.0588 * average_letters - 0.296 * average_sentences - 15.5;

    // Print readability index //
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    if (index > 1 || index <16)
    printf("Grade %i\n", index);
}