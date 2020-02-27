#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt for a "height" number between 1 and 8//
    int height;
    do
    {
        height = get_int("Height:");
    }
    while (height > 8 || height < 1);
 
    //Draw pattern according to height input//
    for (int l = 0; l < height ; l++)
    {
        for (int j = l ; j < height - 1 ; j++)
        {
            printf(" ");
        }
        for (int i = height - l ; i < height + 1 ; i++)
        {
            printf("#");
        }
        printf("\n");
    }
    return height;
}
