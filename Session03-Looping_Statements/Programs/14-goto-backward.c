// C program to print numbers
// from 1 to 10 using goto statement
#include <stdio.h>

// Driver program to test above function
int main() {
    int n = 1;

    label:
        printf("%d ",n);
        n++;
        if (n <= 10)
            goto label;
    
    printf("\n");
    return 0;
}