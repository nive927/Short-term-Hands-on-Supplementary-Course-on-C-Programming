/*
This program calculates the maximum of three numbers - TERNARY OPERATOR
*/
#include <stdio.h>

int main(void) {

    int a, b, c;
    int max;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);    

    // if (a > b && a>c)

    // Do the same thing in a Single Line Expression!
    max = (a > b && a > c) ? a: (b > a && b > c) ? b : (c > a && c > b) ? c : a;

    // max = (a > b && a > c) ? a: (b > a && b > c) ? b : (c > a && c > b) ? c : a;
    /* 
    if (a>b && a>c){
      a
    }
    else{
      if (b>a && b>c){
        b
      }
      else{
        if (c>a && c>b){
          c
        }
        else{
          a
        }
      }
    }
    */

    //printf("[SINGLE-LINE] The maximum of %d, %d, %d is %d.\n", a, b, c, max);

    // Use variables to go through intermediate steps
    max = (a > b) ? a : b;
    /*
    if (a>b){
      a
    }
    else{
      b
    }
    */
    printf("\n[INTERMEDIATE-LINE-1]: The maximum of %d, %d is %d.\n", a, b, max);
    max = (max > c) ? max : c;

    printf("\n[INERMEDIATE-LINE-2]: The maximum of %d, %d, %d is %d.\n", a, b, c, max);
    
  return 0;
}