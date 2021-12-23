
#include <stdio.h>
#include <stdbool.h>


float average_odds(int arr[], int arr_size){
  int i=0, sum=0, odd_counter=0;
  for (i=0;i<arr_size;i++){
    if (arr[i] %2 ==1){
      sum += arr[i];
      odd_counter++;
    }
  }
  float avarage_odds = sum / (float)odd_counter;

  return avarage_odds;
}

float average_evens(int arr[], int arr_size){
  int i=0, sum=0, even_counter=0;

  for (i=0;i<arr_size;i++){
    if (arr[i] %2 ==0){
      sum += arr[i];
      even_counter++;
    }
  }

  float avarage_evens = sum / (float)even_counter;

  return avarage_evens;
}

bool compare(float av_odds, float av_evens){
  if (av_odds > av_evens){
    return true;
  }
  else if (av_odds < av_evens){
    return false;
  }
}

int main()
{
    int i = 0, arr[5];

    printf("Enter 5 numbers: ");
    for(i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    float av_evens = average_evens(arr, 5);
    float av_odds = average_odds(arr, 5);


    printf("The avarage of odd(s) %.2f\n",av_odds );
    printf("The avarage of even(s) %.2f\n",av_evens );

    if (compare(av_odds, av_evens)){
      printf("The average of odd(s) is greater than the average of even(s).");
    }
    else{
      printf("The average of even(s) is less than the average of odd(s).");
    }
    return 0;
}
