// The Fibonacci series is: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

#include<stdio.h>
#include<stdlib.h>

/*
[BOTTOM-UP but Changing Context Window]
In each recurion, assume that the series starts 1 term ahead of the previous recursion - so compute (n-1)th term

Enter Accumulators! - they keep track of the first and second elements of each context

Eg: (for n=4),
    Find the 4th in: [0, 1], 1, 2, 3, ...     [0, 1], 1, 2, 3, ...
    Find the 3rd in: [1, 1], 2, 3, ...        0, [1, 1], 2, 3, ...
    Find the 2nd in: [1, 2], 3, ...           0, 1, [1, 2], 3, ...
    Find the 1st in: [2, 3], ...              0, 1, 1, [2, 3,] ...
*/

int fibonacci_tailrec(int n, int first, int second){

    //Invalid Input
    if(n<1){
        printf("\nI don't get that!\n");
        exit(0);
    }

    // Base Case 1 
    if(n==1){
        return first;
    }
    if(n==2){
        return second;
    }
    else{
        // Like computing a shortened version of the series
        // Updates: new_first = second, new_second = first + second
        return fibonacci_tailrec(n-1, second, first+second);     
    }
}

/*
Things to change: 
- Do we need to go up to n==1?
- Wrapper (enclosing function) for the tailrec function
*/

void main(){
    int n;
    printf("Enter required fibonacci term: ");
    scanf(" %d", &n);
    
    printf("\nThe %dth fibonacci term is: %d\n", n, fibonacci_tailrec(n, 0, 1));
}