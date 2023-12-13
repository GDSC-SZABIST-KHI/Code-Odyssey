#include <stdio.h>

int linearSearch(int arr[], int n, int target);

int main()
{
    // Array with random values initialized
    int arr[] = {5,3,1,57,11,5,6,2};
    // Array size
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // target
    int target = 3;
    int result = linearSearch(arr, n, target);
    if(result == -1){
        printf("No match found");
    }
    else{
        printf("Value found at %d index.", result);
    }
    return 0;
}

int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){ // iterate through array
        if(arr[i] == target){ // if found condition - return index
            return i;
        }
    }
    return -1;
}