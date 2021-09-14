// EOF =>  <Ctrl>d

/* This <Ctrl>d notation means 
pressing the Enter key and then pressing both the Ctrl and d keys simultaneously.*/

#include<stdio.h>


int main(){

    int grade;
    
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts( "Enter the letter grades." );
    puts( "Enter the EOF character to end input" );

    while ( (grade = getchar() ) != EOF )
    {
        switch (grade)
        {
        case 'A':
        case 'a':
            aCount++;
            break;
        
        case 'B':
        case 'b':
            bCount++;
            break;
        
        case 'C':
        case 'c':
            cCount++;
            break;
        
        case 'D':
        case 'd':
            dCount++;
            break;
        
        case 'F':
        case 'f':
            fCount++;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            printf(" %s", "Incorrect letter grade entered.");
            puts( " Enter a new grade. ");
            break;
        }
    }

    printf(" \n Totals for each letter grade are:\n ");
    printf( "A: %u\n", aCount);
    printf( "B: %u\n", bCount);
    printf( "C: %u\n", cCount);
    printf( "D: %u\n", dCount);
    printf( "F: %u\n", fCount);

    return 0;
}