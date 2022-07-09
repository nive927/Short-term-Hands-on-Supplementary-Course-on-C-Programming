// Can it change the address or value?

#include <stdio.h>  
int main()  
{  
    int a=1;  
    int b=2;
	// constant pointer
    int *const ptr=&a;
    // ptr=&b;  
    printf("Value of ptr is :%d",*ptr);  
    return 0;  
}  