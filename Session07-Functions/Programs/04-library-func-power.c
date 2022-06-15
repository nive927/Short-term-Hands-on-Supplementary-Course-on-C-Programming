#include <math.h> // Do you remember how to compile programs in C when using the math.h header file?
#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The square of %d is %lf.\n", num, pow(num, 2));

	// double result = 100 / pow(num, 2);

	// printf("The result of 100 / pow(%d, 2) is %lf.\n", num, result);
	
	return 0;
}