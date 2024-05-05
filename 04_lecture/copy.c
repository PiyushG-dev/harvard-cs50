// cc copy.c -o copy cs50.c
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void){
    string s = get_string("s: ");
    string t = s;
    
    if(strlen(t)> 0) {
        t[0] = toupper(t[0]);
    }
    printf("%s %p\n", s, s);
    printf("%s %p\n", t, t);
}