/*
A
AB
ABC
ABCD
ABCDE

65
65 66
65 66 67
...

* Re-write using characters?
*/

#include <stdio.h>

/* typecasting INT to CHAR when printing! */
// ASCII 0-127 -- char :==> . ! , A-Z: 65-90, a-z: 97-122

int main(void) {

    //printf("%c\n", 99);    // --> c

	int n;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);

	for(int i=1; i<=n; i++) {
		for(int j=65; j<=i+64; j++)
			printf("%c ", j);
		printf("\n");
	}
	
    return 0;
}






























/*
#include <stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=65;j<65+i;j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
*/