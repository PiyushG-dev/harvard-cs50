// cc address.c -o address cs50.c

#include <stdio.h>

int main (void) {
   char *s = "Hey!";
   printf("%c\n",*s);
   printf("%c\n",*(s+1));
   printf("%c\n",*(s+2));
   printf("%c\n",*(s+3));

}