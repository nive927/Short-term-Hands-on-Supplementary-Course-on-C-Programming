/* Get the next and previous values of given number */

#include<stdio.h>

int prev;
int next;

void get_prev_and_next(int n){
    prev = n-1;
    next = n+1;
}

void main(){

    printf("\nCall for 10\n");
    get_prev_and_next(10);
    printf("Previous: %d\n", prev);
    printf("Next: %d\n", next);

    printf("\nCall for 20\n");
    get_prev_and_next(20);
    printf("Previous: %d\n", prev);
    printf("Next: %d\n", next); 
}