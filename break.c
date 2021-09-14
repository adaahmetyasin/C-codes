#include<stdio.h>

int main()
{
    unsigned int x;

    for (x=1; x<= 10; ++x){

        if (x == 5){
            break;
        }
        printf("%u ",x);
    }
    printf("\n Broke out of loop at x == %u\n", x);

    return 0;
}