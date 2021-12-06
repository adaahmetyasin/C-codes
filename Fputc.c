#include<stdio.h>
#include<string.h>


int main(){
    char veri[25] = "Ahmet Yasin ADA";
    int i;
    int uzunluk = strlen(veri);

FILE *filep = fopen("createfile.txt","w");

if (filep == NULL)
{
    printf("Dosya olusturulamadi");
}
else
{
    for(i = 0; i < uzunluk; i++){

        fputc(veri[i],filep);
        printf("Yazilan karakter:%c \n",veri[i]);

    }
    printf("Dosya basarıyla olusturuldu:)");
}





    return 0;
}