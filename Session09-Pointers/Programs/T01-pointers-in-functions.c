#include<stdlib.h>
#include<stdio.h>

int* create_array(int size){
    int *arr = malloc(5*sizeof(int));
    
    int arr1[] = {1, 2, 3, 4, 5}; /// int *arr -> start addr of array

    for(int i=0;i < 5; i++){
        *(arr+i) = *(arr1+i);
    }

    return arr;
}

void main(){
    int *arr = create_array(5);
    printf("\n%d\n", *(arr+1)); 
}