#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Temperature in F: \n");

    float f = get_float("");
    float c = 5.0 / 9.0 * (f - 32.0);

    printf("Temperature in C: %.1f\n", c);

}