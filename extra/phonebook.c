// cc phonebook.c -o phonebook cs50.c

#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
   string name;
   int number;
}person;


int main (void){
    person people[2];

    people[0].name = "Carter";
    people[0].number = 1234;

    people[1].name = "James";
    people[1].number = 5678;

    string name = get_string("What's the name? ");

    for(int i = 0; i < 2; i++){
        if(strcmp(people[i].name, name) == 0){
            printf("Found %i\n", people[i].number);
            return 0;
        }
        printf("Not Found\n");
        return 1;
    }

}