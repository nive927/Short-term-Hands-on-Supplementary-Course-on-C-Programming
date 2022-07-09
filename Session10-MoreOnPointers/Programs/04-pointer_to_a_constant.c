// Can it change the address or value?

// #include <stdio.h>  
// int main()  
// {  
//     int a=100;  
//     int b=200;  
//     const int* ptr;  
//     ptr=&a;  
//     ptr=&b;  
//     printf("Value of ptr is :%d",*ptr);  
//     return 0;  
// }

#include <stdio.h>  
int main()  
{  
    int a=100;  
    int b=200;  
    const int* ptr;  
    ptr=&a;  
    // *ptr=300;  
    printf("Value of ptr is :%d",*ptr);  
    return 0;  
}    