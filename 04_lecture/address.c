// cc address.c -o address cs50.c
#include <stdio.h>

int main(void){
    int n = 50;
    int *p = &n;

    printf("%p\n", p);
}