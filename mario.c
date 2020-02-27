#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("height:");
    }
    while (height < 1 || height > 8);
    for (int i = 0 ; i < height; i++)
    {
        for (int k = i - 1 ; k < height ; k++)
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
