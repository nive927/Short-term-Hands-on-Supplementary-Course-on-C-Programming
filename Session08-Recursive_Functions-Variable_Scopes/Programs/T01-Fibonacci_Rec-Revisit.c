// The Fibonacci series is: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

#include<stdio.h>
#include<stdlib.h>


/*
[TOP-DOWN]
The aim of each recursive step is to compute 
its two preceding terms

(see computation tree image on slide)

Keep going back until the base terms - 0 and 1 - are reached
*/

int fibonacci_rec(int n){

    int curr = 1;
    int prev = 0;

    //Invalid Input
    if(n<1){
        printf("\nI don't get that!\n");
        exit(0);
    }

    // Base Case 1 - when do you even get to this?
    if(n==1){
        return prev;
    }
    // Base Case 2
    if(n==2){
        return curr;
    }
    else{
        return fibonacci_rec(n-2) + fibonacci_rec(n-1);     
    }

}

void main(){
    int n;
    printf("Enter required fibonacci term: ");
    scanf(" %d", &n);
    
    printf("\nThe %dth fibonacci term is: %d\n", n, fibonacci_rec(n));
}