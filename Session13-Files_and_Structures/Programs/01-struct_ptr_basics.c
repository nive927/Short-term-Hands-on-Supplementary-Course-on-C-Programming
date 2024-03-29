#include<stdio.h>

struct Student {
    char name[30];
    int age;
    int roll_number;
};

int main() {
    struct Student student_1;

	// Structure pointer
    struct Student *sp = &student_1;
    
    printf ("Enter the details of the Student (student_1)\n");  
    printf ("\tName: ");  
    scanf ("%s", sp->name);  
    printf ("\tAge: ");  
    scanf ("%d", &sp->age);  
    printf ("\tRoll Number: ");  
    scanf ("%d", &sp->roll_number);  

	// Access through -> operator
    printf ("\n Display the details of the student_1 using Structure Pointer\n");  
    printf ("\tName: %s\n", sp->name); 
    printf ("\tAge: %d\n", sp->age);   
    printf ("\tRoll Number: %d\n", sp->roll_number);  


	// Display using * and . operators
	printf ("\n Display the details of the student_1 using Structure Pointer\n");  
    printf ("\tName: %s\n", (*sp).name); 
    printf ("\tAge: %d\n", (*sp).age);   
    printf ("\tRoll Number: %d\n", (*sp).roll_number);
    
    return 0;
}