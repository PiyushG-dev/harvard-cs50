// cc address.c -o address cs50.c
#include <stdio.h>

int main(void){
   char *s = "hey!";
   printf("%p\n",s);
   printf("%p\n",&s[0]);
}