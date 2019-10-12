#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
    printf("print the word next time \n");
    return 1;
    }
        int k = atoi(argv[1]);
        string w = get_string("");
            for (int i = 0, n = strlen(w); i < n; i++)
            {
                int l = atoi(w[i]);
                if ( isalpha ('w[i]') == true)
                {
                printf("%c", w[i]+k%26);
                }
                else
                {
                    printf("%c", w[i]);
                }
            }

}