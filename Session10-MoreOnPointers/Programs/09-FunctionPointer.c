#include <stdio.h>

void display(int);

void display(int x)
{
    printf("\nDisplaying: %d\n", x );
}

int func(float, char);
 
//  var = 

int main()
{
    // Declare a function pointer
    void (*displayer)(int);

    // int *a ;
    // int b = 10;
    // a = &b;
    // *a

    displayer = &display;
    // or, equivalently
    displayer = display;
 
    // Call the function using the pointer
    (*displayer)(10);
 
    return 0;
}