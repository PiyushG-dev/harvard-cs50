// cc phonebook.c -o phonebook cs50.c
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    string names[] = {"James", "Phil", "David"};
    string numbers[] = {"123", "234", "781"};

    string name = get_string("what's your name? ");

    for(int i = 0; i<3; i++)
    {   
        if(strcmp(names[i], name)){
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
} 