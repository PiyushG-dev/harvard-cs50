// cc recursion.c -o recursion cs50.c

#include <stdio.h>
#include <cs50.h>

void draw(int n);
int main (void) {
    int height = get_int("height? ");
    draw(height);
}

void draw(int n) {
    if(n<1){
        return;
    }
    draw(n-1);
    for(int i = 0; i <n; i++){
        printf("#");
    }   
    printf("\n");
}