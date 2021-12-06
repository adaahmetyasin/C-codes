#include<stdio.h>

int main(){

    int product, amount;
    float price, total;

    printf("%s%18s%13s","Product","Product Number","List Price\n");
    printf("%s%16s%15s","Pen","1","$10.00\n");
    printf("%s%13s%14s","Pencil","2","$6.15\n");
    printf("%s%11s%15s","Notebook","3","$14.00\n");
    printf("%s%13s%14s","Rubber","4","$3.50\n");
    printf("%s%8s%15s","Pencil case","5","$20.05\n"); // We prepared a table.
    
    puts("");
    
    printf("Enter the product number: "); // We wanted a product number from user.
    scanf("%d",&product);

    switch (product)
    {
    case 1:
    price = 10.00;
        break;
    case 2:
    price = 6.15;
        break;
    case 3:
    price = 14.00;
        break;
    case 4:
    price = 3.50;
        break;
    case 5:
    price = 20.05;
    break;                     //We defined the product's price.
    }    
    
    printf("Enter the quantity: ");  //We wanted a quantity.
    scanf("%d",&amount);

    if (amount < 2)
    {
        total = price * amount;
        printf("The total is: %.2f\n",total);
    }
    else if (amount >= 2 && amount <=4)
    {
        total = (price * amount)*95/100;
        printf("The total is: %.2f\n",total);
    }
    else if (amount >= 5 && amount <=9)
    {
        total = (price * amount)*90/100;
        printf("The total is: %.2f\n",total);
    }
    else
    {
        total = (price * amount)*85/100;
        printf("The total is: %.2f\n",total);   //We calculated the total.
    }

    return 0;
}