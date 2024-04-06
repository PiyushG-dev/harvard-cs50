// cc str.c -o str cs50.c

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string name = get_string("What's your name? ");

    int n = strlen(name);

    // int n = 0;
    // while(name[n] != '\0')
    // {
    //     n++;
    // }

    printf("length: %i\n", n);
}