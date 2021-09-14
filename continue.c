#include<stdio.h>

int main(){
    unsigned int x;

    for ( x = 1; x <= 10; ++x)
    {
        if ( x == 5 ){
            continue;
            
        }
        printf(" %u ", x );
    }
    
    puts("\nUsed continue tos kip printing the value 5" );
    return 0;
}

