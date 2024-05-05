// cc compare.c -o compare cs50.c
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void) {
    string s = get_string("value of s: ");
    string t = get_string("value of t: ");
    
    if(strcmp(s, t)== 0){
        printf("same\n");
    }else{
        printf("different\n");
    }
}