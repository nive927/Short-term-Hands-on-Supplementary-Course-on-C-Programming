/*
This program calculates the maximum of three numbers.
*/
#include <stdio.h>

int main(void) {

    int a, b, c;
    int max;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    printf("Enter c: ");
    scanf("%d", &c);

    max = a;
    
    if (a > b && a > c) {
        max = a;
    }

    else if (b > a && b > c) {
        max = b;
    }

    else if (c > a && c > b) {
        max = c;
    }

    // else
    //     max = a;

    // What is the difference in execution between this and 02 and 03?

    printf("The maximum of %d, %d, %d is %d.\n", a, b, c, max);
    
  return 0;
}