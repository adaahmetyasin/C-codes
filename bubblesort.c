#include<stdio.h>

#define MAX 50

void bubblesort(int arr[], int size){

    int i,j;
    for(i=0; i<size; i++){
        for(j=1; j<size; j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main (){
    int array[MAX],size;
    int i;
    printf("kac elemanlı:");
    scanf("%d",&size);
    for(i=0; i<size; i++){

        scanf("%d",&array[i]);
    }
    bubblesort(array, size);

    for ( i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    




    return 0;
} 

// /* Bubble sort code */
// #include <stdio.h>

// int main()
// {
//   int array[100], n, c, d, swap;

//   printf("Enter number of elements\n");
//   scanf("%d", &n);

//   printf("Enter %d integers\n", n);

//   for (c = 0; c < n; c++)
//     scanf("%d", &array[c]);

//   for (c = 0 ; c < n - 1; c++)
//   {
//     for (d = 0 ; d < n - c - 1; d++)
//     {
//       if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
//       {
//         swap       = array[d];
//         array[d]   = array[d+1];
//         array[d+1] = swap;
//       }
//     }
//   }

//   printf("Sorted list in ascending order:\n");

//   for (c = 0; c < n; c++)
//      printf("%d\n", array[c]);

//   return 0;
// }