/*
This program calculates the maximum of two numbers.
*/
#include <stdio.h>

int main() {

    int a, b;
    int max;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    if(a > b) {
        max = a;
    }

    if(b > a) {
        max = b;
    }

    printf("The maximum of %d, %d is %d.\n", a, b, max);
    
  return 0;
}

/*
TEST CASES:
4
5


10
10
*/