#include <stdio.h>

int main(void) {
	int sum = 255;
	short age = -1;
	double average = 4.45015E-308;

	// Declaring a interger pointer which points to the variable sum
	int* ptrSum = &sum;
	double* ptrAverage = & average;

	short* ptrAge;
	ptrAge = &age;

	// printf("Size of sum: %zu\n", sizeof(sum));
	// printf("Address: %p\n", ptrSum);
	// printf("Size of *ptrSum: %zu\n\n", sizeof(*ptrSum));

	
	// printf("%d\n", *ptrSum);
	// printf("%d\n", sum);

	// printf("Size of age: %zu\n", sizeof(age));
	// printf("Size of *ptrAge: %zu\n\n", sizeof(*ptrAge));

	// printf("Size of average: %zu\n\n", sizeof(average));
	// printf("Size of *ptrAverage: %zu\n\n", sizeof(*ptrAverage));

	// printf("Size of ptrSum: %zu\n", sizeof(ptrSum));

	printf("Size of ptrSum: %zu\n", sizeof(ptrSum));
	printf("Size of ptrAverage: %zu\n", sizeof(ptrAverage));
	printf("Size of ptrAge: %zu\n\n", sizeof(ptrAge));

	printf("Size of ptrSum: %zu\n", sizeof(ptrSum));
	printf("Size of *ptrSum: %zu\n", sizeof(*ptrSum));

	


	// Printing adresses

	// NULL

	// Pointer Arithemetic

	// Addition 

	// Subtraction
}