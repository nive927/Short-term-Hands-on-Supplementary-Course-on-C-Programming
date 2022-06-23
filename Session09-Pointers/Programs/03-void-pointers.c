#include <stdio.h>
int main()
{
    // int a = 1;
	double b = 4;
	void* ptr = &b;

	// FIX
	printf("%p\n", (double*)ptr);
    printf("%lf\n", *(double*)ptr);

	// int a [2] = {1, 2};
	// ptr = &a;
 //    ptr = ptr + sizeof(int);
 //    printf("%d", *(int *)ptr);
	
    return 0;
}