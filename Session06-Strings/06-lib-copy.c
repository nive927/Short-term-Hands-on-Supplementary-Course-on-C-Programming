#include <string.h>
#include <stdio.h>

void main (){
   char a[50], b[50];

   printf ("Enter source string");
   scanf("%s", a);

   char *c; 
   c = strcpy (b, "string");
   printf ("Copied the string!\n%s", c);
}

// char *s1 --> char s1[]