#include<stdio.h>

struct student
{
    char name[20];
    char surname[20];
    int number;
    int age;
};





void show(struct student a){

    printf("Ogrencinin bilgileri: %s %s %d %d",a.name,a.surname,a.number,a.age);


}


struct student degerAl(){

    struct student new;

    printf("Ogrenci bilgilerini giriniz: ");
    scanf("%s %s %d %d",new.name,new.surname,&new.number,&new.age);

    return new;


}


int main(){
    // struct student student1 = {"Joey","Tribbiani",13579,29}; =>13. satırda fonksiyonunu yazıyoruz
    // show(student1);

    struct student student1 = degerAl();
    show(student1);





    return 0;
}