// cc greet.c -o greet cs50.c
#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{   
    if(argc == 2)
    {
    printf("hello, %s\n", argv[1]);
    }else{
        printf("provide valid num of args\n");
    }
}

