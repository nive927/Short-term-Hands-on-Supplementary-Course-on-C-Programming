#include<stdio.h>
#include<stdlib.h>

int *map_with_one_int_arg(/* a function that takes an int and returns an int */, int *arr, int size){

    int *ret_arr = /* create an array that you can return */

    /* apply `function` to all elements */

    // return the result
}

int square_int(int num){
    // find and return the square of `num`
}

void main(){

    int size = 5;
    int arr[10] = {4, 5, 6, 7, 8};
    
    int *result = /*apply the mapper*/

    // Display the returned array
    for(int i=0; i<size; i++){
        printf("\n-> %d", *(result+i));
    }
}