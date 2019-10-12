#include <cs50.h>
#include <stdio.h>

int main (void)
{
printf("Введи X\n");
int x = get_int();
printf("Введи Y\n");
int y = get_int();
if (x<y)
{
printf("X меньше, чем Y\n");
}
else if (x>y)
{
printf("X больше, чем Y\n");
}
else
{
printf("X равно Y\n");
}
}

