#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void) 
{
    //Prompt user for a positive change value//
    float change;
    do
    {
        change = get_float("How much change is owed?");
    }
    while (change < 0.00);

    //Convert dollars value into cents//
    int changec = round(change * 100);   

    //Count required number of coins//
    int c1 = changec / 25; //Number of 25c coins//
    int c2 = (changec - c1 * 25) / 10; //Number of 10c coins//
    int c3 = (changec - c1 * 25 - c2 * 10) / 5; //Number of 5c coins//
    int c4 = (changec - c1 * 25 - c2 * 10 - c3 * 5) / 1; //Number of 1c coins//

    //Show number of coins required to give change//
    int ct = c1 + c2 + c3 + c4; //Total number of coin//
    printf("%i\n", ct);
}
