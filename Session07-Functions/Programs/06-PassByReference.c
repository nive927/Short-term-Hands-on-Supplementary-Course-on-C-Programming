#include <stdio.h>

void swap(int*, int*);

int main () {

   int a = 100;
   int b = 200;

   printf("This is what `&x` stores: %p\n", &a);
   printf("This is what `x` stores: %d\n", a);
 
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );
 
   /* calling a function to swap the values */
   swap(&a, &b);
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
 
   return 0;
}

void swap(int *x, int *y) {

   int temp;

   printf("[IN FUNCTION] This is what `x` stores: %p\n", x);
   printf("[IN FUNCION] This is what `*x` stores: %d\n", *x);

    // int a = *x;
   temp = *x; 
   *x = *y;    
   *y = temp; 
  
   return;
}