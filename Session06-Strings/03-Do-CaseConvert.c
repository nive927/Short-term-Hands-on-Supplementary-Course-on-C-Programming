/* Convert Uppercase to Lowercase */

#include <stdio.h>

int main() {

    /* 65-90 : A-Z */  
    /* 97-122: a-z */

    // int a = 'c';
    // printf("\n%d", a);
    // printf("\n%c", a-32);



    
    char s1[100], s2[100], i;

    printf("\nEnter string 1: ");
    fgets(s1, sizeof(s1), stdin);

    printf("\n%s", s1);

    for (i = 0; s1[i] != '\0'; ++i) {
        // Check if s1[i] is lowercase
        if(s1[i]>=65 && s1[i]<=90){
            s2[i] = s1[i]+32;
        }
        else{
            s2[i] = s1[i];
        }
        /* Check if uppercase --- make lowercase */
    }

    s2[i] = '\0';
    printf("\nString 2 (converted): %s", s2);
    
    
    return 0;
}
