/*
* swap_var_third.c
This is a program to swap the values of two variables using a third variable.
*/

#include <stdio.h>

int main() {

    int a = 5, b = 10;

    printf("a: %d b: %d\n", a, b);

    int c;

    c = a;
    a = b;
    b = c;

    printf("a: %d b: %d\n", a, b);
    
    return 0;
}