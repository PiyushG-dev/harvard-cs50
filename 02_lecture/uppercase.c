// cc uppercase.c -o uppercase cs50.c
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// problem statement: convert a string to uppercase based on user input
// Algorithm:
// 1. Take input from user
// 2. check for lowercase letters if any
// 3. loop through the characters
// 4. convert lowercase to uppercase if any
// 5. print uppercase values


int main(void)
{   
    string name = get_string("What's your name? ");

    // for(int i = 0; i < strlen(name); i++){
    //     if(name[i] >= 97 && name[i] <= 122){
    //         printf("%c", name[i] - 32);
    //     }
    //     else{
    //         printf("%c", name[i]);
    //     }
    // }
    // printf("\n");

    for(int i = 0, n = strlen(name); i < n; i++)
    {
        printf("%c", toupper(name[i]));
    }
    printf("\n");

}

