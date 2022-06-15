#include <stdio.h>

int square(int n);

int main(void) {
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The square of %d is %d.\n", num, square(num));

	int result = 100 / square(num);

	printf("The result of 100 / SQUARE(%d) is %d.\n", num, result);
	
	return 0;
}

int square(int n)
{
	return n * n;
}