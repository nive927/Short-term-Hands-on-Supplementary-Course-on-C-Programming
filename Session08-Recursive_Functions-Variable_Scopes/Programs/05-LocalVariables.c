#include <stdio.h>

void display(){
    int n = 10;   
    printf("Accessing `n` from display(): n = %d", n);  
}

int main(void) {
  
    int i = 100;
    int n = 1000;

    for (int i = 0; i < 5; ++i) {
        printf("Iterating...");
    }

    // {
    //     int i = 0;
    // }

    // Error: i is not declared at this point
    printf("Accessing `i` from outside the loop: i = %d\n", i);  

    display();
    // Error: n is not declared at this point
    printf("Accessing `n` from main(): n = %d\n", n);  

    return 0;
}
