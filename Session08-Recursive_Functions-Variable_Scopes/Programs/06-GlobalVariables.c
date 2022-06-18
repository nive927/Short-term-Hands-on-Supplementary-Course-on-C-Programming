#include <stdio.h>

void display();

int n = 5;  // global variable

int main()
{
    ++n;   
    printf("Accessing in main() - n = %d\n", n);  
    display();
    return 0;
}

void display()
{
    ++n;   
    printf("Accessing in display() - n = %d\n", n);  
}
