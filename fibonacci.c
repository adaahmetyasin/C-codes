// recursive code

#include<stdio.h>

unsigned long long int fibonacci( unsigned int number );

int main()
{   
    unsigned long long int result;
    unsigned int number;

    printf( "%s", "Please enter an integer: " );
    scanf( "%u", &number);

    result = fibonacci( number );

    printf( "Fibonacci(%u) = %llu \n", number, result );
    
    return 0;
}
unsigned long long int fibonacci(unsigned int number )
{
    if ( number == 0 || number == 1)
    {
        return number;
    }
    else
    {
        return fibonacci( number - 1) + fibonacci( number - 2);
    }
}