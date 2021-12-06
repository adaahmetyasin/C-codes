#include<stdio.h>

int main(){

   // FILE *filep = fopen("file_name","Mod"); 
   // modlar = -w oluşturmak için
   //            -r yazmak için

FILE *filep = fopen("trytoOpen.docx","r");

if (filep == NULL)
{
    printf("Dosya bulunamadı");
}
else
{
    printf("Dosya bulundu");
}


    return 0;
}