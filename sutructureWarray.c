#include<stdio.h>

struct student
{
    char name[20];
    char surname[20];
    int number;
};

int main(){

    struct student students[3];

    int i;
    
    for(i=0; i<3; i++){

        printf("%d . ogrencinin bilgilerini giriniz",i+1);
        scanf("%s %s %d",students[i].name,students[i].surname,&students[i].number);
    }

    for(i=0; i<3; i++){

        printf("%d. ogrencinin bilgileri %s %s %d \n",i+1,students[i].name,students[i].surname,students[i].number);
    }






    return 0;
}