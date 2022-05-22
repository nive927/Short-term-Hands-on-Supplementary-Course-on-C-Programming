/*
This program calculates the maximum of two numbers.
*/
#include <stdio.h>

int main(void) {

    int a, b;
    int max;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);

    max = a;
    
    if(a > b)
        max = a;

    else
        max = b;

    printf("The maximum of %d, %d, %d is %d.\n", a, b, c, max);
    
  return 0;
}