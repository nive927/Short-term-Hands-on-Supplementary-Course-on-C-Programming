// C program to print Trapezium Pattern
#include <stdio.h>


int main()
{

	int num;
	int space;

	int i, j, lterm, rterm;

	printf("Enter n: ");
	scanf("%d", &num);

	// The terms on the LHS of the pattern
	lterm = 1;

	// The terms on the RHS of the pattern
	rterm = num * num + 1;

	for (i = num; i > 0; i--) {

		// To print number of spaces
		for (space = num; space > i; space--)
			printf(" ");

		for (j = 1; j <= i; j++) {
			printf("%d", lterm);
			printf("*");
			lterm++;
		}
		for (j = 1; j <= i; j++) {
			printf("%d", rterm);
			if (j < i)
				printf("*");
			rterm++;
		}

		// To get the next term on RHS of the Pattern
		rterm = rterm - (i - 1) * 2 - 1;
		printf("\n");
	}
}
