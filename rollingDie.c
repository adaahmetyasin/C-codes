#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 7

int main()
{
    unsigned int frequency[SIZE] = {0};

    srand(time(NULL)); 

    for (size_t roll = 0; roll < 60000000; roll++)
    {
        size_t face = 1 + rand() % 6;
        ++frequency[face];
    }
    
    printf("%s%14s\n","Face","Frequency");

    for (size_t face = 1; face < SIZE; face++)
    {
        printf("%lu%17d\n", face, frequency[face]);
    }
    
    





    return 0;
}