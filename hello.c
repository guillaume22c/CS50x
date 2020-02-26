#include <cs50.h>
#include <stdio.h>
// Prompt hello joined with user name //

int main(void)
{
    string username = get_string("What is your name?\n");
    printf("hello, %s\n", username);
}
