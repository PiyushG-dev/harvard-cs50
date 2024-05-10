// cc copy.c -o copy cs50.c
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main (void){
    string s = get_string("s: ");
    string t = malloc(strlen(s) + 1);

    for(int i = 0; i<strlen(s) + 1; i++){
        t[i] = s[i];
    }
    
    if(strlen(t)> 0) {
        t[0] = toupper(t[0]);
    }
    printf("%s %p\n", s, s);
    printf("%s %p\n", t, t);
}