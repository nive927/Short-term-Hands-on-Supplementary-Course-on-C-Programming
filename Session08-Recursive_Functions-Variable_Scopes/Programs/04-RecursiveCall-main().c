#include <stdio.h>

int i = 1;
int n = 10;

int main()
{
    if (i <= n) {
        printf("%d ", i++);
        main();
    }
    return 0;
}