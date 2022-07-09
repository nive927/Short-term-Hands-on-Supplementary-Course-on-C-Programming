#include <stdio.h>

int main(void) {

	int var = 89;
	
	// Declare an integer pointer and assign it.
	int * ptri = &var;	

	// Declare a void pointer and assign it.
	void * ptrv = &var;

	// Print the addresses stored by the integer and void pointers.
	printf("Adress stored by ptri: %p\n", ptri);
	printf("Adress stored by ptrv: %p\n", ptrv);

	// Print the addresses of the pointers.
	printf("Address of ptri: %p\n", &ptri);
	printf("Address of ptrv: %p\n", &ptrv);
	
	// Print the values of the integer and void pointers.
	printf("Value stored by ptri: %d\n", *ptri);
	printf("Value stored by ptrv: %d\n", *(int*)ptrv);

	// Print the size of the void and integer pointers.
	printf("Size of ptri: %zu\n", sizeof(ptri));
	printf("Size of ptrv: %zu\n", sizeof(ptrv));
	
	// Print the size of the void and integer pointees.
	printf("Size of ptri pointee: %zu\n", sizeof(*ptri));
	printf("Size of ptrv pointee: %zu\n", sizeof(*(int*)ptrv));

	
	return 0;
}