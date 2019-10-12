#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Enter time you spend in the shower: ");
    int x = get_int("");
    printf("For taking a shower you spend %i bottles!\n", x*12);
}