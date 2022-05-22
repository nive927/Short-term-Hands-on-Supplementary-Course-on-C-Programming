#include<stdio.h>

int main(){
    char gender;
    int age;
    printf("Enter your age and then gender(M, F or O): ");
    scanf("%d %c", &age, &gender);
    printf("You entered: %d and %c", age, gender);
}
   