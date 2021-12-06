#include<stdio.h>

struct student
{
    char name[20];
    char surname[20];
    int number;
    int age;
};



int main(){

    struct student joey = {"Joey","Tribbiani",13579,29};

    printf("%s %s %d %d",joey.name,joey.surname,joey.number,joey.age);

 


    return 0;
}