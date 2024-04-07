// Write an algorithm to decrypt messages written in the ceaser cipher algorithm

// cc crypto.c -o crypto cs50.c

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string message = get_string("What's the encrypted message? ");

    printf("the actual message is: ");
    for(int i = 0; i < strlen(message); i++)
    {   
        if(message[i] == 65 || message[i] == 97){

            printf("%c", message[i] + 25);

        }
        else if(message[i]>= 97 && message[i]<= 122 || message[i]>=65 && message[i]<= 90)
        {

            printf("%c", message[i] - 1);

        }
    }
    printf("\n");

}