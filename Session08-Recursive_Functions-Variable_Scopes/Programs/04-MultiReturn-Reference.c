/* Get the next and previous values of given number */

#include<stdio.h>

void get_prev_and_next(int n, int *prev, int *next){
    // Do this with references, instead
    
    *prev = n-1;
    *next = n+1;
}

void main(){
    int previous, next;
    get_prev_and_next(10, &previous, &next);
    printf("Next %d", next);
    // call the function appropriately
}