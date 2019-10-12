#include <cs50.h>
#include <stdio.h>

int height;

int main(void)
{
    do
    {
        height = get_int("Height: ");
    }
    while(height > 23 || height <0);

    for (int i = 0; i < height; i++)
    {
        for (int s = height-1; s > i; s--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
        printf("#");
        }
        printf("##");
        printf("\n");
    }
}
