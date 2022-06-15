#include <stdio.h> 

void int_out (const int array[], const int n) 
{ 
        printf ( "The integers are:\n"); 

        for(int i = 0 ; i < n ; ++i) 
        { 
                printf("%d\n", array[i]); 
        } 
        // n = 10;

        // Try changing the value
        // array[7] = 1000;
} 

int main(void) 
{ 
        int array[] = { 2, 7, 1, 3, 5, 8 }; 
        int_out(array, 6); 
        
        for(int i = 0 ; i < 6 ; ++i) 
        { 
                printf("%d\n", array[i]); 
        } 

        return 0; 
} 