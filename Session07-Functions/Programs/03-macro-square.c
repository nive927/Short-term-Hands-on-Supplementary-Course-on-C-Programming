#include <stdio.h>

#define SQUARE(x) (x * x)

int main(void) {
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The square of %d is %d.\n", num, SQUARE(num));

	int result = 100 / SQUARE(num);

	// SQUARE(2) ---> 2 * 2 (4)
	// 100 / 2 * 2 (100 / 4)
	printf("The result of 100 / SQUARE(%d) is %d.\n", num, result);
	
	return 0;
}