// cc search.c -o search cs50.c
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    string names[] = {"James", "Hardy", "David", "Zeal", "Chester"};

    string name = get_string("What's your name?: ");

    for(int i = 0; i<5; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("FOUND\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}