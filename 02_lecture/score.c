// cc score.c -o score cs50.c
#include <stdio.h>
#include <cs50.h>

const int n = 5;
float average(int array[]);

int main(void)
{
    int scores[n];
    for(int i = 0; i < n; i++){
        scores[i] = get_int("Score %i: ", i+1);
    }

    printf("avg is %f\n", average(scores));
}

float average(int array[])
{
    // return (
    //     (array[0] + array[1] + array[2] )/ (float) 3
       
    // );

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += array[i];
    }
    int average = sum/(float) n;
    return average;
}
