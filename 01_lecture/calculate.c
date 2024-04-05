// cc calculate.c -o calculate cs50.c

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    double x = get_double("What's x?\n ");
    double y = get_double("What's y?\n ");

    double z = x / y ; 

    printf("%.20f\n", z);
}