/*
Insert an element at the specified position
*/

#include<stdio.h>

int main(){
    
    // Ideally, we would dynamically increase the size of the array
    int n = 8;
    int arr[10] = {2, 3, 4, 7, 8, 9, 10, 11};

    int i;
    printf("\nArray before Insertion\n");  
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    // element to be inserted
    int x = 5;
 
    // position at which element
    // is to be inserted
    int pos = 8;
 
    // increase the size by 1
    n++; // 9

    // 2  3  4  7  8  9  10  11   -   -     (Size: 8)
    // 2  3  4  7  8  8   9  10  11    (Size: 9) at pos=4
    // ->          5  8   9  10  11    (Size: 9) at pos=4
    // Shift elements to RIGHT --> Make space for 5!
    for (i = n-1; i >= pos; i--){
        arr[i] = arr[i - 1]; 
    }
    // insert x at pos
    arr[pos] = x;
 
    // print the array after insertion
    printf("\nArray after Insertion\n");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    return 0;    
}