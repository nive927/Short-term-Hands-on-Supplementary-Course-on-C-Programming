/*
(fact 3)
(fact-tail 3 1)
(fact-tail 2 3)
(fact-tail 1 6)
(fact-tail 0 6)
6
*/

#include<stdio.h>

int factorial_tailrec(unsigned int n, unsigned int a)
{
    if (n == 1)  return a;
 
    return factorial_tailrec(n-1, n*a);
}

int main(){
    int result = factorial_tailrec(5, 1);
    printf("\nResult: %d\n", result);
}