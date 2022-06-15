#include<stdio.h> 

void increment(int *z );

int main() {    
    int x = 100;    

    printf("Before function call x: %d \n", x); 

    // call the function to increment, here
    increment(&x);

    printf("After function call x: %d \n", x);  

    return 0;  
}    

void increment(int *x) {    // Function signature
    // increment num permanently, here
    *x = *x + 1;
    return;
}    