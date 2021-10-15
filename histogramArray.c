#include<stdio.h>

#define SIZE 5

int main()
{
    int array[SIZE] = {2, 5, 7, 8, 4};

    printf("%s%13s%17s\n","Element","Value","Histogram");

    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%7lu%13d        ", i, array[i]);

        for (size_t j = 0; j <= array[i]; j++)
        {
            printf("%s", "*");
        }

        puts("");
    }
    





    return 0;
}