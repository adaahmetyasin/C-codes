#include<stdio.h>
// n! / (n-k)! * k!
int factoriel(int number);

int main()
{
    int n, k, result=0, temp =1;

    printf("Please enter an integer for value of n: ");
    scanf("%d",&n);
    while (n < 0)
    {
        printf("Please enter unsigned integer: ");
        scanf("%d",&n);
    }
    
    printf("Please enter an integer for value of k: ");
    scanf("%d",&k);
    while (k < 0)
    {
        printf("Please enter unsigned integer: ");
        scanf("%d",&k);
    }
    while (k > n)
    {
        printf("Do not enter a number greater than n!\n");
        printf("Please enter unsigned integer: ");
        scanf("%d",&k);
    }

    result = factoriel(n) / ( factoriel(n-k) * factoriel(k) );
    printf("%d\n",result);


}
int factoriel(int number)
{
int temp = 1;
while( number > 0)
    {
    temp = number * temp;
    number--;
    }
    return temp;
}