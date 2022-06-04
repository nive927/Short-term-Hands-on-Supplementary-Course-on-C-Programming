#include <stdio.h>

int main() {

    char s1[100], s2[100], i;

    printf("\nEnter string 1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        if(s1[i]>=65 && s1[i]<=91){
            s2[i] = s1[i] + 32;
        }
        else{
            s2[i] = s1[i];
        }
    }

    s2[i] = '\0';
    printf("\nString 2 (converted): %s", s2);
    
    return 0;
}
