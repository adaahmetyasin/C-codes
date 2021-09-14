#include<stdio.h>

int max (int x, int y, int z);

int main(){

int number1, number2, number3;

printf("Please enter three integers: ");
scanf("%d%d%d",&number1, &number2, &number3);

printf("Maximum is:%d ",max(number1, number2, number3));
puts("");

  return 0;
}

int max (int x, int y, int z){
  int max = x;

  if (y > max)
  {
    max = y;
  }
  if (z > max)
  {
    max = z;
  }
  return max;
  
}