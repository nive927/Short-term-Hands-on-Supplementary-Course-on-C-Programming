#include <stdio.h>
int main() {

  int i, x[6], sum = 0;

  printf("Enter 6 numbers: ");


  for(i = 0; i < 6; ++i) {
      scanf("%d", x+i);
      sum += *(x+i);
  }

  printf("\nSum = %d\n", sum);

  return 0;
}

// int a;

// unsigned int a;
// size_t a;

// typedef unsigned int size_t;