#include <stdio.h>

void swap(int *a, int *b);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[] = {5,3,1,57,11,5,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Unsorted array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
    

    return 0;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n){
    int swapped; // used to reduce time complexity
    for(int i=0; i<n-1; i++){
        swapped = 0;
        for(int j=0; j<n-i-1; j++){
            // If condition satisfied then swap
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}

// Swap using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}