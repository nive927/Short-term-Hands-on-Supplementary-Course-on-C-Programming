/*
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>

int main(void) {

	int n;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);

    int pr_num = 1;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++){
			printf("%d ", pr_num);
            pr_num++;
        }
		printf("\n");
	}
	
    return 0;
}