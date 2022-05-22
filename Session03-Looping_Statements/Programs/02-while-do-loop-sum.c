#include <stdio.h>

int main(void) {

	int n;
	int sum = 0;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);

	int i = 1;
	while(i <= n)
		{
			sum += i++;
		}

	printf("The sum of %d numbers is %d\n", n, sum);
    
    return 0;
}