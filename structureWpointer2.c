#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    char surname[20];
    int number;
    
};

void show(struct student *p){

    printf("Student' information\nName:%s\nSurname:%s\nNumber:%d\n",p->name,p->surname,p->number);
}

int main(){

    struct student student1 = {"Ahmet","Ada",303};

    show(&student1);



    return 0;
}