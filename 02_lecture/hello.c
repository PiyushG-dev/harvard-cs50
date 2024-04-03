// cc hello.c -o hello cs50.c
#include <stdio.h>
#include <cs50.h>

int main (void){
  string first = get_string("What's your name? ");
  printf("Hello, %s\n", first);
}

