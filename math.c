//Checking math library functions
#include<math.h>
#include<stdio.h>

int main()
{   
    //The sqrt() function computes the square root of a number.
    printf( "sqrt(%.1f) = %.1f\n", 900.0, sqrt( 900.0 ) );
    printf( "sqrt(%.1f) = %.1f\n", 9.0, sqrt( 9.0 ) );
    puts( "" );
   
    //The exp() function computes e (2.71828) raised to the power of the given argument.
    printf( "exp(%.1f) = %f\n", 1.0, exp( 1.0 ) );
    printf( "exp(%.1f) = %f\n", 2.0, exp( 2.0 ) );
    puts( "" );

    //The log() function computes the natural logarithm of an argument.
    printf( "log(%f) = %f\n", 2.718282, log( 2.718282 ) );
    printf( "log(%f) = %f\n", 7.389056, log( 7.389056 ) );
    puts( "" );

    //lThe log10() function computes the base 10 logarithm of an argument.
    printf( "log10(%.1f) = %.1f\n", 1.0, log10( 1.0 ) );
    printf( "log10(%.1f) = %.1f\n", 10.0, log10( 10.0 ) );
    printf( "log10(%.1f) = %.1f\n", 100.0, log10( 100.0 ) );
    puts( "" );

    //The fabs() function returns the absolute value of a number.
    printf( "fabs(%.1f) = %.1f\n", 30.0, fabs( 30.0 ) );
    printf( "fabs(%.1f) = %.1f\n", 0.0, fabs( 0.0 ) );
    printf( "fabs(%.1f) = %.1f\n", -30.0, fabs( -30.0 ) );
    puts( "" );

    //The ceil() function computes the nearest integer greater than the argument passed.
    printf( "ceil(%.1f) = %.1f\n", 7.3, ceil( 7.3 ) );
    printf( "ceil(%.1f) = %.1f\n", -8.1, ceil( -8.1 ) );
    puts( "" );

    //The floor() function calculates the nearest integer less than the argument passed.
    printf( "floor(%.1f) = %.1f\n", 7.3, floor( 7.3 ) );
    printf( "floor(%.1f) = %.1f\n", -8.1, floor( -8.1 ) );
    puts( "" );

    //The pow() function computes the power of a number.
    printf( "pow(%.1f, %.1f) = %.1f\n", 2.0, 5.0, pow( 2.0, 5.0) );
    printf( "pow(%.1f, %.1f) = %.1f\n", 4.0, 0.5, pow( 4.0, 0.5) );
    puts( "" );

    //The fmod() function returns the remainder of dividing x/y.
    printf( "fmod(%.3f, %.3f) = %.3f\n", 13.657, 2.333, fmod( 13.657, 2.333 ) );
    puts( "" );

    //The sin() function returns the sine of a number.
    printf( "sin(%.1f) = %.1f\n", 0.0, sin( 0.0 ) );
    puts( "" );

    //The tan() function returns tangent of the argument passed.
    printf( "tan(%.1f) = %.1f\n", 0.0, tan( 0.0 ) );
    puts( "" );

    //The cos() function computes the cosine of an argument.
    printf( "cos(%.1f) = %.1f\n", 0.0, cos( 0.0 ) );
    puts( "" );
    
    return 0;
}