#include <stdio.h>

int main(void) {

	int n;
	int sum = 0;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);

	int i = 1;
	do
		{
			sum += i++;
		}while(i<=n);

	printf("The sum of %d numbers is %d\n", n, sum);
    
    return 0;
}