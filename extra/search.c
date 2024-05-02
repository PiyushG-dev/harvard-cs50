// cc search.c -o search cs50.c

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void){
    string names[] = {"james", "phil", "david", "brook", "max", "steph"};

    string s = get_string("String: ");
    for (int i = 0; i < 6; i++){
        if(strcmp(names[i], s) == 0){
            printf("Found\n");
            return 0;
        }
    } 
    printf("Not found\n");
    return 1;

}