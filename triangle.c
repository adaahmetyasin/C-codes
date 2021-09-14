
#include<stdio.h>


int main()
{

    int i, j;
    int enter, star, space;

    printf("Enter:");
    scanf("%d", &enter);
    
    star = 1;
    space = enter - 1;

    for (i = 0; i < enter; i++)
    {
        for ( j = 0; j < space; j++)
        {
            printf(" ");
        }
        for ( j = 0; j < star; j++)
        {
            printf("*");
        }
    printf("\n");
    star++;
    space--;
    }
}
