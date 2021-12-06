#include<stdio.h>

int main(){


    int *p,*q;
    int a = 5;
    p = &a;
    q = &p;

    printf("%d\n",*p); //5
    printf("%p\n",p);  //içeriği
    printf("%p\n",&p); //pointerın adres değeri
    printf("%p\n",q);  //q'nun içeriği yani p pointerin adresi


    


    return 0;
}