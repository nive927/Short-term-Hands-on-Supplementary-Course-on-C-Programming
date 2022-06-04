#include <string.h>
#include <stdio.h>

int main (){
   char a[30] = "Hello";

   printf("%d", sizeof(a));

   printf("\nEnter string: ");
   scanf(" %s", a);

   int l;
   l = strlen(a);

   l = 0;
   for(l=0; a[l]!='\0'; l++){
      ;  // pass
   }

   printf("length of the string = %d\n", l);
   
}