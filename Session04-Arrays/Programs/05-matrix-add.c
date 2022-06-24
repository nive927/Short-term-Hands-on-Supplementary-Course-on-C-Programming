#include <stdio.h>

int main() {

    // int a[10];
    /* 
    1 2    1 3   1  6
    3 4    5 6   15 24
    */ 
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;

  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c); // 3 X 4

    // a[i][0] --> ith row in a and 0th element ithn the ith row
  printf("\nEnter elements of Matrix A:\n");
  for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      printf("Enter element A[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }

  printf("\nMatrix A\n");
  for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  printf("\nEnter elements of Matrix B:\n");
  for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      printf("Enter element B[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  }

  printf("\nMatrix B\n");
  for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      printf("%d ", b[i][j]);
      }
    printf("\n");
  }

  // adding two matrices
  for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] * b[i][j];
    }
  }

  // printing the result
  printf("\nSum of the matrices: \n");
  for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      printf("%d ", sum[i][j]);
      }
    printf("\n");
  }

  return 0;
}
