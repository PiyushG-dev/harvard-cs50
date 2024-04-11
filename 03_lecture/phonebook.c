// cc phonebook.c -o phonebook cs50.c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;


int main (void)
{   
    person people[3];

    people[0].name = "James";
    people[0].number = "123";

    people[1].name = "Phil";
    people[1].number = "234";

    people[2].name = "David";
    people[2].number = "789";

    string name = get_string("what's your name? ");

    for(int i = 0; i<3; i++)
    {   
        if(strcmp(people[i].name, name)){
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
} 