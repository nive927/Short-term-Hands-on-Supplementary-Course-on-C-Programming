#include<stdio.h>


/*
In each recursion step, I am heading towards the end of the string.
Finally (base case), I reach the end of the string (\0)
The recursive calls start returning, and I start storing those positions into `rev_string` (back to front)

For instance: (string: hey) rev_string-> yeh
- ("hey\0", 0, "", 0)
    - ("hey\0", 1, "", 0)
        - ("hey\0", 2, "", 0)
            - ("hey\0", 3, "", 0)
              HIT BASE CASE - START RETRACING
            - ("hey\0", 3, "", 0)
        - ("hey\0", 2, "y", 1)
    - ("hey\0", 1, "ye", 2)
- ("hey\0", 1, "yeh", 3)
*/
            
void reverse_string_rec(const char string[], int posn, char rev_string[], int *size){
    if(string[posn]=='\0'){
        return;
    }
    // h -> e -> y : y -> e -> h
    rev_string[*size] = string[posn];
    *size = *size + 1;
    reverse_string_rec(string, posn+1, rev_string, size);    
    /* no profceses */
    return;
}

/*
Things to do:
- Don't reverse the string, just copy it! - just need to reorder the lines
*/

void main(){

    char str[10] = "hey";

    // printf("Enter a String: ");
    // scanf(" %s", &str);

    int result_size = 0;
    char result_str[10];
    reverse_string_rec(str, 0, result_str, &result_size);

    for(int i=0; i<result_size; i++){
        printf("%c", result_str[i]);
    }
    printf("\n");

}