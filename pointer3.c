#include<stdlib.h>
#include<stdio.h>

int f(int *);
int g(int);


int main(){
    int *p;
    int a = 10;
    p = &a;

    printf("%d",*p);
    *p = 20;
    printf("\n%d",a);

    int *q = (int *)malloc(sizeof(int)*a);
    q[5] = 70;

    printf("\n%d",q[5]);

    f(&a);
    printf("\n%d",a);

    g(a);
    printf("\n%d",a);




    return 0;
}
int g(int a){ // call by value
    return a = 90;
}
int f(int * a){ // call by reference
    return *a = 80;
}