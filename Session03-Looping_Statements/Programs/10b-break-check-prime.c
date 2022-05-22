#include<stdio.h>
#include<math.h>

int main(){

    int number = 0;
    printf("\nEnter a number: ");
    scanf(" %d", &number);

    int isPrime = 1;
    int factor = 2;
    int maxFactor = (int)sqrt(number);

    for (factor = 2; factor <= maxFactor; ++factor) {
        printf("\nChecking %d...", factor);
        if (number % factor == 0) {   // Is it a Factor?
            isPrime = 0;
            printf("\nFactor found");
            break;   // A factor found, no need to search for more factors
        }
    }

    if (isPrime) 
        printf("\n%d is prime\n", number);
    else 
        printf("\n%d is NOT prime\n", number);

}