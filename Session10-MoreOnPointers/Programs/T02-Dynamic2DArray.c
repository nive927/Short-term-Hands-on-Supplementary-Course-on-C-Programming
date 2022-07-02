#include<stdio.h>
#include<stdlib.h>

// map(): map(double, [1,2,3]) -> [1, 2, 3] -> [2, 4, 6]; double(4) -> 8

int* map_with_one_int_arg(int (*function)(int), int *arr, int size){

    int *ret_arr = (int*)malloc(sizeof(int)*size);
    // int ret_arr[size];

    for(int i=0; i<size; i++){
        *(ret_arr+i) = function(*(arr+i));
    }

    return ret_arr;
}

int square_int(int num){
    return num * num;
}

void main(){

    int size = 5;

    int arr[10] = {4, 5, 6, 7, 8};    

    int *result = map_with_one_int_arg(square_int, arr, size);


    // Display the returned array
    for(int i=0; i<size; i++){
        printf("\n-> %d", *(result+i));
    }
}