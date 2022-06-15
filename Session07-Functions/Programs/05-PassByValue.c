#include <stdio.h>  

void swap(int, int);

int main () {

   int a = 100;
   int b = 200;

   printf("Address of `a` here: %p\n", &a);
 
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );
 
   /* calling a function to swap the values */
   swap(a, b);
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
 
   return 0;
}

void swap(int a, int b) {

   int temp;

   printf("[INSIDE FUNCTION] Address of `a` here: %p\n", &a);

   temp = a; 
   a = b;    
   b = temp; 

   printf("[INSIDE FUNCTION] Afer Swapping: a is %d\n", a);
   printf("[INSIDE FUNCTION] Afer Swapping: b is %d\n", b);
  
//    return;
}