#include<stdio.h>

double factorial_recursive(double n)
{
	if(n == 0)
		return 1;

	return n * factorial_recursive(n-1);
}

int main() {

	double num;
	
	printf("FACTORIAL CALCULATOR\n\n");
	printf("Enter number: ");
	scanf("%lf", &num);

	printf("%lf! is %lf\n", num, factorial_recursive(num));
	
	return 0;
}