#include <stdio.h>
#include <cs50.h>
// program do find out if a number is prime
int main (void)
{
    int i = get_int("What number do you want to check?\n");

    if(i % 2 == 0)
    {
        printf("PRIME\n");
    }
    else
    {
        printf("NON PRIME\n");
    }
}
