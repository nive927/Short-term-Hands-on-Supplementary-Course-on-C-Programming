/*
* poke_shake_prob.c
* This program calculates the shake probability of 
* a pokeball given the catch rate, a, as user input.
*/
#include<stdio.h>
#include<math.h>
int main()
{
   int a, b;

   // take catch rate
   printf("Enter catch rate of the pokeball [1-255]: ");
   scanf("%d",&a);

   // calculate ball shake probability
   b = floor(65536/sqrt(sqrt(255/a)));

   // display result
   printf("Ball shake probability = %d\n", b);

   return 0;
}