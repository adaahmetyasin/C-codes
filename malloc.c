// pointer'a kaç elemanlı olduğunu giriyoruz

#include<stdio.h>
#include<stdlib.h>

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



    return 0;
}