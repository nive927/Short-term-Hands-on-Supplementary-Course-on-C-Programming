#include<stdio.h>

typedef long long ll;

/*

Fibonacci Series:

0, 1, 1, 2, 3, 5, .....

Base Cases:
fib(0) = 0
fib(1) = 1

Recurrence Relation:
fib(n) = fib(n-1) + fib(n-2)

*/

ll fibonacci_recursive(ll n){

	if(n < 0)
		return -1;
	
	if(n == 0)
		return 0;

	if(n == 1)
		return 1;

	return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

int main()
{
	ll n;
	
	printf("FIBONACCI\n\n");
	printf("Enter n: ");
	scanf("%lld", &n);

	printf("The %lldth fibonacci number is %lld\n", n, fibonacci_recursive(n));
}