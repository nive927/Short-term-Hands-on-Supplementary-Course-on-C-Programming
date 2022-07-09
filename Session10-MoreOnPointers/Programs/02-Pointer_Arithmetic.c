#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size = 5;

	// allocate space for an array called arr using variable size dynamincally
	int * arr = malloc(size * sizeof(int));

	for(int i=0; i<size; i++)
		{
			printf("Enter arr[%d]: ", i);
			// scanf("%d", &arr[i]);
			// another way to write it is?
			scanf("%d", arr+i);
		}

	
	for(int i=0; i<size; i++)
		{
			printf("arr[%d]: %d\n", i, *(arr+i));
			printf("Address of arr[%d]: %p\n", i, arr+i);
		}

	// Using the above logic, print the array elements backwards - how will you do this?
	int * back = arr+size-1;
	for(int i=0; i<size; i++)
		{
			printf("arr[%d]: %d\n", i, *(back-i));
			printf("Address of arr[%d]: %p\n", i, back-i);
		}

	
	return 0;
}