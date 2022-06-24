#include <stdio.h>

void display_array(int arr[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {

    // [ 1 3 4 5 7 9 ], 4 -> [ ]
    // [20]  [ 12 10 15 14 ] -> [ 12 20 ]

    int arr[] = {20, 12, 10, 15, 14};
    // [20, 12, 10, 15, 14] +> 
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array Size: %d\n", size);
    
    printf("\nBefore Sorting\n");  
    display_array(arr, size);

    for (int curr_idx=1; curr_idx < size; curr_idx++) {
        
        int curr = arr[curr_idx];
        int j = curr_idx - 1;

        printf("\nConsider Position %d: ", curr_idx);
        display_array(arr, size);

        // Compare `curr` with each element on its LEFT until smaller
        while (curr < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            printf("\n\t%d Vs. %d: ", curr, arr[j]);
            display_array(arr, size);
            j--;
        }
        arr[j + 1] = curr;

        printf("\nSorted Upto Position %d: ", curr_idx);
        display_array(arr, size);
    }

    printf("\nAfter Sorting\n");  
    display_array(arr, size);
}