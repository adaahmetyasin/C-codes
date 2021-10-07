#include<stdio.h>
#define SIZE 12
int main()
{
    int array[SIZE] = {1, 24, 56, 13, 15, 2, 7, 8, 11, 10, 43, 29};
    int total = 0;

    for (size_t i = 0; i < SIZE; ++i)
    {
        total += array[i];
    }

    printf("Sum of the array is:%d\n",total);
    
    return 0;
}