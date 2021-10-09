#include<stdio.h>

int main()
{
    int number, i, j, situation;
    

    printf("Please enter a number: ");
    scanf("%d",&number);
    for (i = 2; i <= number; i++)
    {
        situation = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                situation = 0;
                printf("%d isn't a prime number.\n",i);
                break;
            }
            
        }
        if (situation == 1)
        {
            printf("%d is a prime number.\n",i);
        }
        
    }
    
    return 0;
}