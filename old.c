#include <stdio.h>
#include <cs50.h>

int main (void)
{
    float age = get_float("What is your age?\n");
    printf("You are at least %.0f minutes old\n", age * 365 * 24 * 60);
}
