// C program to check if a number is
// even or not using goto statement
#include <stdio.h>



int main() {
	int num = 26;
	printf("\nEnter a number: ");
	scanf(" %d", &num);
	
	if (num % 2 == 0)
		// jump to even
		goto even;
	else
		// jump to odd
		goto odd;

	even:
		printf("%d is even\n", num);
		// return if even
		return 0;
	odd:
		printf("%d is odd\n", num);
	
	// rest of the program
	return 0;
}