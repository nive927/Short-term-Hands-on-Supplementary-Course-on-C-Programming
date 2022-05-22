/*
    Check if a number if Prime or NOT
 *  8: 2, sqrt(8) -> 2.3 -> 2 --> sqrt(8) --> sqrt(n):
 */
#include <stdio.h>
#include <math.h>
 
int main() {
   int number = 0;
    printf("\nEnter a number: ");
    scanf(" %d", &number);

    int isPrime = 1;
    int factor = 2;
    int maxFactor = (int)sqrt(number);
      // IP=25: --> 5 : 2, 3, 4, 5
    for (factor = 2; factor <= maxFactor; ++factor) {
        printf("\nChecking %d...", factor);
        if (number % factor == 0) {   // Is it a Factor?
            isPrime = 0;
            printf("\nFactor found");
        }
    }

    if (isPrime) 
        printf("\n%d is prime\n", number);
    else 
        printf("\n%d is NOT prime\n", number);
}