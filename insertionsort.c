#include<stdio.h>

#define MAX 50

void insertionsort(int arr[], int size){
    int i, j, element;

    for(i=0; i<size; i++){
        element = arr[i];
        j = i-1;
        while (j >=0 && arr[j] > element)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = element;
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
    insertionsort(array, size);

    for ( i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
      return 0;
} 

// #include<stdio.h>
// int main(){

//    /* Here i & j for loop counters, temp for swapping,
//     * count for total number of elements, number[] to
//     * store the input numbers in array. You can increase
//     * or decrease the size of number array as per requirement
//     */
//    int i, j, count, temp, number[25];

//    printf("How many numbers u are going to enter?: ");
//    scanf("%d",&count);

//    printf("Enter %d elements: ", count);
//    // This loop would store the input numbers in array
//    for(i=0;i<count;i++)
//       scanf("%d",&number[i]);

//    // Implementation of insertion sort algorithm
//    for(i=1;i<count;i++){
//       temp=number[i];
//       j=i-1;
//       while((temp<number[j])&&(j>=0)){
//          number[j+1]=number[j];
//          j=j-1;
//       }
//       number[j+1]=temp;
//    }

//    printf("Order of Sorted elements: ");
//    for(i=0;i<count;i++)
//       printf(" %d",number[i]);

//    return 0;
// }