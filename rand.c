#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int i;
    for ( i = 1; i <= 20 ; i++)
    {
        printf("%5d", 1 + (rand() % 6));
        if( i % 5 == 0)
        {
            puts( "" );
        }
    }
    
    return 0;
}