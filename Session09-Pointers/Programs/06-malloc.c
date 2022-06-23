// Program to calculate the sum of n numbers 

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, sum = 0;
  void *ptr;

  printf("Enter number of elements: ");
  scanf("%d", &n);

    // 52 ------
  // float -> int: 4, float: 8  float-> 52, 60, 68 ...., int -> 52, 56

    // n = 5, 5*4 = 20 bytes
  ptr = malloc(n * sizeof(int));  // --> Casting the TYPE here
 
    float c = 1;
    printf("\n%f", c);

  // if memory cannot be allocated
  if(ptr == NULL) { 
    printf("Error! memory not allocated.");
    exit(0);
  }

  printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    sum += *((int*)(ptr + i));
  }

  printf("\nArray Contents Now\n");
  for(i = 0; i < n; ++i) {
    printf("%d\n", *((int*)(ptr + i)));
  }

  printf("\nSum = %d\n", sum);
  
  // deallocating the memory
  free(ptr);

  return 0;
}
