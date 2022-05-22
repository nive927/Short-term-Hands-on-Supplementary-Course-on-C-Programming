#include<stdio.h>

int main(){
    int n;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);

    int fact = 1;
    int i = 2;
    while(i<=n){
        fact *= i;
        i++;
    }

    printf("%d! is: %d\n", n, fact);
}