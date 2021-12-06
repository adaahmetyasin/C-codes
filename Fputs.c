#include<stdio.h>

int main(){

    FILE *filep;
    
    char text[256];

    filep = fopen("write.txt","a");
    
    if (filep == NULL)
    {
    printf("Dosya olusturulamadi");
    }
    else
    {
        printf("Write something: ");
        fgets(text,256,stdin);
        fputs(text,filep);
        printf("Dosyaya yazildi");
        fclose(filep);
    }
    


    return 0;
}