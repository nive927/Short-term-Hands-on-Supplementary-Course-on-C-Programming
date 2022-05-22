/*
This program calculates the maximum of two numbers - TERNARY OPERATOR
*/
#include <stdio.h>

int main(void) {

    int a, b;
    int max;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);

    max = (a > b) ? a: b;

    printf("The maximum of %d, %d is %d.\n", a, b, max);
    
  return 0;
}