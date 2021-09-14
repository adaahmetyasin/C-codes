
#include<stdio.h>

int main(){

    int grade;

    printf("Please enter your grade: ");
    scanf("%d",&grade);

    if (grade >= 60){
        printf("passed");
    }
    else
    {
        printf("failed");
    }
    



    return 0;
}
