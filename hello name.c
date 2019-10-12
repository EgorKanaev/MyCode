#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf ("What is your name?\n");
    string s = get_string("");
    printf ("hello, %s\n", s);
}