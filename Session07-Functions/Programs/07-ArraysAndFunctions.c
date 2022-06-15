/* Search an array for the given key using Linear Search */
#include <stdio.h>

// int a[] = {1, 2, 3};
// int *a;
 
int linearSearch(int a[], int size, int key);
 
int main() {
   const int SIZE = 10;
   int a1[] = {5, 8, 1, 2, 13, 7, 9, 10, 11, 6};
   // 1048, 1052, 1056, ...

	printf("Array: ");
	for(int i=0; i<SIZE; i++)
		{
			printf("%d ", a1[i]);
		}

   // CALL THE FUNCTION!!
   int result = linearSearch(a1, SIZE, 13);
   printf("Index is %d\n", result);

	printf("\n\n");
}

int linearSearch(int a[], int size, int key) {
   int i;
   for (i = 0; i < size; ++i) {
      if (a[i] == key) return i;
   }
   return -1;
}




























/*

 
   printf("Index of %d in array is %d\n", 10, linearSearch(a1, SIZE, 10));  // 0
   printf("Index of %d in array is %d\n", 8, linearSearch(a1, SIZE, 8));  // 1
   printf("Index of %d in array is %d\n", 99, linearSearch(a1, SIZE, 99)); // 8 (not found)
   */