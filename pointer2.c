#include<stdio.h>

int main(){

    int d[10] = {0,1,2,3,4,5,6,7,8,9},*p;
    //p = d;
    p = &d[8];  //pointeri d dizisinin 8. elemanına atadık 

    printf("%d\n",d[5]);
    printf("%d",*(p-3));

    



    return 0;
}