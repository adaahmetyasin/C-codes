#include<stdio.h>
#include<stddef.h>

#define RESPONSES_SIZE 20
#define FREQUENCY_SIZE 11

int main()
{
    int frequency[FREQUENCY_SIZE] = {0};
    int responses[RESPONSES_SIZE] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};

    for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer)
    {
        ++frequency[responses[answer]];
    }
    printf("%s%17s\n","Rating","Frequency");

    for (size_t rating = 1; rating < FREQUENCY_SIZE; rating++)
    {
        printf("%6lu%17d\n", rating, frequency[rating]);
    }

    return 0;
}