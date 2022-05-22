/*
A
BC
DEF
GHIJ
KLMNO
*/

#include <stdio.h>

/* typecasting INT to CHAR when printing! */
// ASCII 0-127 -- char :==> . ! , A-Z: 65-90, a-z: 97-122

int main(void) {

    //printf("%c\n", 99);    // --> c

	int n;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);

    int pr_num = 65;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++){
			printf("%c ", pr_num);
            pr_num++;
        }
		printf("\n");
	}
	
    return 0;
}
