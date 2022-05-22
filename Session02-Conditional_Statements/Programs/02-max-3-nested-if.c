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
    
    if(a > b) {
        if(a > c) {
            max = a;
        }
    }

    if(b > a) {
        if(b > c) {
            max = b;
        }
    }

    if(c > a) {
        if(c > b) {
            max = c;
        }
    }

    printf("The maximum of %d, %d, %d is %d.\n", a, b, c, max);
    
  return 0;
}

/*
TEST CASES:
4
5
1


10
10
10
*/