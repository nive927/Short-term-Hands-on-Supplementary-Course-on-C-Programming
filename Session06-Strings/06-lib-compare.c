#include<stdio.h>
#include<string.h>

int main (){

    /*
    h ello
    w orld

    h e l  lo
    h e y

    Hello
    hello-!@#

    [ 109 ... ]
    [ 115 .. ]

    */

    char a[50], b [50];
    int result;

    printf ("Enter String A: ");
    scanf (" %s", a);

    printf ("Enter String B: ");
    scanf (" %s", b);

    result = strcmp(a, b);
    
    if (result==0){
        printf("%s is (alphabetically) equal to %s", a, b);
    }else if (result>0){
        printf("%s is (alphabetically) greater than %s",a, b);
    }else if (result<0){
        printf("%s is (alphabetically) less than %s", a, b);
    }
    printf("\n");
}