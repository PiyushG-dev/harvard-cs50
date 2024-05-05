// cc address.c -o address cs50.c
#include <stdio.h>

int main(void){
   char *s = "hey!";
   printf("%s\n", s);
   printf("%s\n", s+1);
   printf("%s\n", s+2);
}