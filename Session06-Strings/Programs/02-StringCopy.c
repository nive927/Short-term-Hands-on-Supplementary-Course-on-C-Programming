#include <stdio.h>

int main() {

    char s1[100], s2[100], i;

    printf("\nEnter string 1: ");
    // scanf("]", s1);
    fgets(s1, sizeof(s1), stdin);
    // gets(s1);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String 2 (copied): %s", s2);

    return 0;
}
