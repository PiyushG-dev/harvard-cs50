// cc buggy1.c -o buggy1 cs50.c
#include <stdio.h>
#include <cs50.h>

int get_negative(void);

int main (void){
    int num = get_negative();

    printf("the num is %i\n", num);
}

int get_negative(void){
    int num;
    do{
    num = get_int("Give a num? ");
    }while(num<0);
    return num;
}