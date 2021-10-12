
#include<stdio.h>

int main(){

    int grade;

    printf("Please enter your grade: ");
    scanf("%d",&grade);

    if (grade >= 70)
    {
        printf("great\n");
        
        if (grade >= 80)
        {
            printf("good\n");
            
            if (grade >= 90)
            {
                printf("passed\n");
            }else
            {
                printf("cool\n");
            }

        }else
        {
            printf("your grade is not greater than 80.\n");
        }
        
        
    }else
    {
        printf("failed.:(");
    }
    
    

    return 0;
}
