// cc status.c -o status cs50.c
#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if(argc != 2){
        printf("missing cli args\n");
        // returning 1 for failed status
        return 1;
    }else{
        printf("Hello %s\n", argv[1]);
        return 0;
    }
}