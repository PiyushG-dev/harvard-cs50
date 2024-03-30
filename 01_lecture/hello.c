#include <stdio.h>
#include "cs50.h"

int main(void){
    string first = get_string("what's your first name? ");
    string last = get_string("what's your last name? ");
    printf("hello, %s %s\n", first, last);
}

// cc hello.c -o hello cs50.c