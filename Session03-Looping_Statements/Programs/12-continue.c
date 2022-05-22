// Sum 1 to upperbound, exclude 11, 22, 33,...
#include<stdio.h>

int main(){
   
   int upperbound = 23;
   int sum = 0;
   int number;

   /* using `continue` */
   for (number = 1; number <= upperbound; ++number) {
      if (number % 11 == 0) 
         continue;  // Skip the rest of the loop body, continue to the next iteration
      sum += number;
   }
   printf("%d", sum);

   /* without using `continue` ??  */
   /*
   for (number = 1; number <= upperbound; ++number) {
      if (number % 11 != 0) 
         sum += number;
   }
   */

   return 0;
}
