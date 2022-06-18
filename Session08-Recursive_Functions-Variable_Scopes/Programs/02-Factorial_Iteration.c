#include<stdio.h>

/*
Recurrence Relation:

Do it programmatically in C not mathematically!!!!

Base Case
if(n==0)
return 1;

Recursive
return n * fact(n-1);

*/

double factorial_iterative(double n)
{
	double fact = 1;

	for(double i=2; i<=n; i++)
		{
			fact *= i;
		}
	
	return fact;
}

int main() {

	double num;
	
	printf("FACTORIAL CALCULATOR\n\n");
	printf("Enter number: ");
	scanf("%lf", &num);

	printf("%lf! is %lf\n", num, factorial_iterative(num));
	
	return 0;
}