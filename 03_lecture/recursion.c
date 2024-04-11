// cc recursion.c -o recursion cs50.c
#include <stdio.h>
#include <cs50.h>

void draw(int n);
int main (void)
{   
    // int height = get_int("what's the height? ");
    draw(4);
}

void draw(int n)
{   
    if(n<=0)
    {
        return;
    }
    draw(n-1);
    for(int i = 0; i<n; i++)
    {
        printf("#");
    }
    printf("\n");
}