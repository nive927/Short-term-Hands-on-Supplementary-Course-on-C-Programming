// Can it change the address or value?

#include <stdio.h>  
int main()  
{  
    int a=10;  
    int b=90;  
    const int* const ptr=&a;  
   *ptr=12;  
    ptr=&b;  
    printf("Value of ptr is :%d",*ptr);  
    return 0;  
}  