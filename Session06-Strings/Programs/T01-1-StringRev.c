#include<stdio.h>
#include<string.h>

int main() {

    char s1[100], s2[100], i;

    printf("\nEnter String: ");
    fgets(s1, sizeof(s1), stdin);

    printf("\nOriginal String: %s", s1);

    int n = strlen(s1);
    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[n-1-i];
    }
    
    printf("\nString Reversed: %s", s2);
    
    return 0;
}
