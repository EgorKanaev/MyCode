/*
jharvard @ appliance (~/Dropbox/pset2) ./initials
Zamyla Chan
ZC
jharvard @ appliance (~/Dropbox/pset2) ./initials
robert thomas bowden
RTB
*/

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s = get_string("");

    if (s != NULL)
    {
        printf("%c", toupper(s[0]));
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if (s[i] == ' ')
            {
                printf("%c", toupper(s[i+1]));
            }
        }
        printf("\n");
    }
}