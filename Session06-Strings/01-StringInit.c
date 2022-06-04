#include<stdio.h>

void main(){
    
    // Double quotes denote `string literals`
    char str1[] = "hello";
    
    // Size is 6 - Note the `null` character at the end
    char str2[] = { 'h', 'e', 'l', 'l', 'o', '\0'};

    // Specify the size - Excess initalized to '\0'!
    char str3[10] = {'h', 'e', 'y'};

    printf("\n%s\n", str1);
    printf("\n-->%d\n", str3[4]);
}