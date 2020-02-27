#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to input height between 1 and 8//
    int height;
    do
    {
        height = get_int("height:");
    }
    while (height < 1 || height > 8);
    //Draw pattern according to height value input//
    for (int i = 0 ; i < height; i++)
    {
        for (int k = i + 1 ; k < height ; k++)
        {
            printf(" ");
        }
        for (int j = height - i - 1 ; j < height ; j++)
        {
            printf("#");
        }
        printf(" ");
        for (int l = height - i - 1 ; l < height ; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
