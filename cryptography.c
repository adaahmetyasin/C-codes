cry//cryptography

#include<stdio.h>

int main()
{
    
int digit1, digit2, digit3, digit4;
int password;
int encrypted;

printf("Please create a 4 digit password: ");
scanf("%d",&password);

digit1 = (password % 10);
password = password - digit1;
digit2 = (password % 100) / 10;
password = password - digit2;
digit3 = (password % 1000) / 100;
password = password - digit3;
digit4 = (password % 10000) / 1000;

digit1 = (digit1 + 7) % 10;
digit2 = (digit2 + 7) % 10;
digit3 = (digit3 + 7) % 10;
digit4 = (digit4 + 7) % 10;

printf("%d%d%d%d\n",digit2,digit1,digit4,digit3);

return 0;
}
