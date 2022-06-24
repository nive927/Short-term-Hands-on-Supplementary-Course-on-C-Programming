#include <stdio.h>

void display_array(int arr[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {
  
  int arr[] = {20, 12, 10, 15, 2};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Array Size: %d\n", size);
  
  printf("\nBefore Sorting\n");  
  display_array(arr, size);

  int temp;
  for (int curr_idx = 0; curr_idx < (size-1); curr_idx++) {
    printf("\n----------------------------------");
    int min_idx = curr_idx;

    printf("\nConsider Position %d: ", curr_idx);
    display_array(arr, size);

    for (int i = curr_idx + 1; i < (size); i++) {
      // Select the minimum element
      printf("\n\t%d Vs. %d: ", arr[i], arr[min_idx]);
      display_array(arr, size);
      if (arr[i] > arr[min_idx])
        min_idx = i;
    }

    printf("\nMinimum Found: %d ---> Swap %d and %d", arr[min_idx], arr[min_idx], arr[curr_idx]);

    // place the minimum at the correct position ---> Swap `curr_idx` and `min_idx` positions
    temp = arr[min_idx];
    arr[min_idx] = arr[curr_idx];
    arr[curr_idx] = temp;

    printf("\nSorted Upto Position %d: ", curr_idx);
    display_array(arr, size);
  }
  
  printf("\nAfter Sorting\n");  
  display_array(arr, size);
}