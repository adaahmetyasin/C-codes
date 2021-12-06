#include<stdio.h>
#include<string.h>


struct Address{

    char mahalle[15];
    char cadde[15];
    char sokak[15];
    int daireno;
};

struct student
{
    char name[20];
    char surname[20];
    int number;
    int age;
    struct Address adres;
};


int main(){
    struct student student1;

    strcpy(student1.name,"Ahmet");
    strcpy(student1.surname,"Ada");
    student1.number = 1234;
    student1.age = 19;
    strcpy(student1.adres.mahalle,"beykoz");
    strcpy(student1.adres.cadde,"7. cad");
    strcpy(student1.adres.sokak,"gumussuyu");
    student1.adres.daireno = 53;

    printf("%s %s %d %d %s %s %s %d",student1.name,student1.surname,student1.number,student1.age,student1.adres.mahalle,student1.adres.cadde,student1.adres.sokak,student1.adres.daireno);

    return 0;
}