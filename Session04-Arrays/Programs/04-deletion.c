/*
Delete a specific element from the array
*/

#include<stdio.h>

int main(){
    
    // Ideally, we would dynamically decrease the size of the array
    int n = 8;
    int arr[10] = {2, 3, 4, 7, 8, 9, 10, 11};

    int i;
    printf("\nArray before Deletion\n");  
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    // position from which element
    // is to be deleted
    int elem;
    printf("\nEnter element to delete: ");
    scanf("%d", &elem);
 
    // decrease the size by 1
    n--;

    int found = 0;
    for(i=0;i<n;i++){
        if(!found && arr[i]==elem){
            found = 1;
        }
        if(found){
            // Start shifting to the left
            arr[i] = arr[i+1];
        }
    }

    /*
    pos = i; //8
    // 2  3  4  8  9  10 11  11        (Size: 8)
    // 2  3  4  8  9  10 11            (Size: 7) at pos=3
    // Shift elements to the LEFT
    for(i=pos;i<n;i++){
        printf("\n-->%d", i);
        arr[i] = arr[i+1];
    }
    */
    printf("\nArray after Deletion\n");
    for (i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");
    
 
    return 0;    
}