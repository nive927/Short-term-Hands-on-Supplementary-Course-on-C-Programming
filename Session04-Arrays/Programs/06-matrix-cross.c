#include <stdio.h>

int main() {

    /*
    [1 3] X [3
             1]  = [ 6 ]
    */

  int r1, r2, c1, c2, a[100][100], b[100][100], prod[100][100], i, j, k;

  printf("Enter the number of rows in Matrix A: ");
  scanf("%d", &r1);
  printf("Enter the number of columns in Matrix A: ");
  scanf("%d", &c1);
  printf("Enter the number of columns in Matrix B: ");
  scanf("%d", &c2);

  r2 = c1;
  /* Why aren't we getting the input for Rows in Mat-B, and just setting it instead? */

  printf("\nEnter elements of Matrix A:\n");
  for (i = 0; i < r1; ++i){
    for (j = 0; j < c1; ++j) {
      printf("Enter element A[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }

  printf("\nMatrix A\n");
  for (i = 0; i < r1; ++i){
    for (j = 0; j < c1; ++j) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  printf("\nEnter elements of Matrix B:\n");
  for (i = 0; i < r2; ++i){
    for (j = 0; j < c2; ++j) {
      printf("Enter element B[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  }

  printf("\nMatrix B\n");
  for (i = 0; i < r2; ++i){
    for (j = 0; j < c2; ++j) {
      printf("%d ", b[i][j]);
      }
    printf("\n");
  }

  // Initializing elements of matrix mult to 0.
   for (i = 0; i < r1; ++i) {
      for (j = 0; j < c2; ++j) {
         prod[i][j] = 0;
      }
   }

  // multiplying two matrices
  for (i = 0; i < r1; ++i){
    for (j = 0; j < c2; ++j) {
        for (k = 0; k < r2; ++k) {
            prod[i][j] += (a[i][k] * b[k][j]);
        }
    }
  }

  /*
   p[00] += a[01] * b[10]
   p[00]  = 3
   p[00] = 6
    [1 3] X [3
             1]  = [ 6 ]
    */

  // printing the result
  printf("\nProduct of the matrices: \n");
  for (i = 0; i < r1; ++i){
    for (j = 0; j < c2; ++j) {
      printf("%d ", prod[i][j]);
      }
    printf("\n");
  }

  return 0;
}
