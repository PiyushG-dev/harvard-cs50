// cc iteration.c -o iteration cs50.c

#include <cs50.h>
#include <stdio.h>

void draw (int n);
int main (void)
{
    int height = get_int("What's the height? ");
    draw(height);
}

void draw (int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }   
   
}