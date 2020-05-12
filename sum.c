#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int a = get_int("What is the 1st number?\n");
   
    int b = get_int("What is the 2nd number?\n");

    int d = get_int("Do you need to add or sub?\n");

    if (d == 'add' || d == 'Add' || d == 'ADD')
    {
        printf("The result is %i \n", a+b);
    }
    else if (d == 'sub' || d == 'Sub' || d == 'SUB')
    {
        printf("The result is %i \n", a-b);
    }
    else
    
}
