#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int counter = 0;
    float c;
    do
    {
        printf("Enter your cash: ");
        c = get_float("");
    }
    while (c <= 0.0);
if (c >= 0.25)
{
    do
    {
        c = c - 0.25;
        counter ++;
    }
    while (c >= 0.25 && c > 0);
}
else if (c >= 0.1)
{
    do
    {
        c = c - 0.10;
        counter ++;
    }
    while (c >= 0.10 && c > 0);
}
else if (c >= 0.05)
{
    do
    {
        c = c -0.05;
        counter ++;
    }
    while (c >= 0.05 && c > 0);
}
else
{
    do
    {
        c = c -0.01;
        counter ++;
    }
    while (c >= 0.01 && c > 0);
}
    printf("%i \n", counter);
}
