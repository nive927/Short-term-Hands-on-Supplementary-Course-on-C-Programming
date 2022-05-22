/*
This program calculates the maximum of three numbers.
*/

#include <stdio.h>

int main() {

    int a, b, c;
    
    int max = a;
    
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // if a is greater than both b and c, a is the largest
    if (a >= b && a >= c)
        max = a;
    
    // if b is greater than both a and c, b is the largest
    if (b >= a && b >= c)
        max = b;
    
    // if n3 is greater than both a and b, c is the largest
    if (c >= a && c >= b)
        max = c;

    printf("The maximum of %d, %d, %d is %d.\n", a, b, c, max);

  return 0;
}