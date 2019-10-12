#include <cs50.h>
#include <stdio.h>

int main (void)
{
printf("Give me X\n");
int x = get_int("");
printf("Give me Y\n");
int y = get_int("");
if (x<y)
{
    printf("%i and %i.\n", x, y);
printf("X is less than Y\n");
}
else if (x>y)
{
printf("X is greater than Y\n");
}
else
{
printf("X is equal to Y\n");
}
}

