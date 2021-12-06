#include<stdio.h>

struct cars
{
    int tekerleksayisi;
    int vitessayisi;
    int model;
    float motor;
    int beygir;
    char marka[20];
}car1,car2;


int main(){

   struct cars car1 = {4,7,2016,2.1,300,"bmw"};
   car2 = car1;

    printf("%d %d %d %.2f %d %s",car2.tekerleksayisi,car2.vitessayisi,car2.model,car2.motor,car2.beygir,car2.marka);


    return 0;
}