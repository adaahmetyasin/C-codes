#include<stdio.h>

#define MAX 50

void selectionsort(int arr[], int size)
{
    int i,j;     
    int minimumindeks;
    for(i=0; i<size-1; i++) 
    {
        minimumindeks = i;
        for(j=i+1; j<size; j++)
        {
        if(arr[j] < arr[minimumindeks])
            {
            minimumindeks = j;
            }
        } 
    }
    int temp = arr[i];
    arr[i] = arr[minimumindeks];
    arr[minimumindeks] = temp;
}

int main (){
    int array[MAX],size;
    int i;
    printf("kac elemanlı:");
    scanf("%d",&size);
    for(i=0; i<size; i++){

        scanf("%d",&array[i]);
    }
    selectionsort(array, size);

    for ( i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    




    return 0;
} 

// // C program for implementation of selection sort
// #include <stdio.h>
 
// void swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }
 
// void selectionSort(int arr[], int n)
// {
//     int i, j, min_idx;
 
//     // One by one move boundary of unsorted subarray
//     for (i = 0; i < n-1; i++)
//     {
//         // Find the minimum element in unsorted array
//         min_idx = i;
//         for (j = i+1; j < n; j++)
//           if (arr[j] < arr[min_idx])
//             min_idx = j;
 
//         // Swap the found minimum element with the first element
//         swap(&arr[min_idx], &arr[i]);
//     }
// }
 
// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }
 
// // Driver program to test above functions
// int main()
// {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }