#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    char surname[20];
    int number;
    
};



int main(){

    struct student *tut;

    struct student student1;

    strcpy(student1.name,"Halil");
    strcpy(student1.surname,"Inalcik");
    student1.number = 10;

    tut = &student1;

    //printf("%s %s %d \n",student1.name,student1.surname,student1.number);
    printf("%s %s %d \n",tut->name,tut->surname,tut->number);


    return 0;
}