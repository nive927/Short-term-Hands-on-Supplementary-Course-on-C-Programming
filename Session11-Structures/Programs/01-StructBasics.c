#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  int rollno;
  char section;
};

// How will you shorten the following declaration? (i.e. alias the datatype)
typedef struct Student Student;

int main() {
  // Initialize student1 using curly braces

  struct Student student1 = {"Student1", 1, 'A'};

  // Initialize student2 using Designated Initialization for rollno
  Student student2;

  // Declare student3 using the shortened declaration
  Student student3;

  // Set all the values of student3 to that of student1
  student3 = student1;

  // printing values - Access the members

  // Student 1
  printf("Student Name : %s\n", student1.name);
  printf("Student RollNo : %d\n", student1.rollno);
  printf("Student Section : %c\n", student1.section);

  printf("\n\n------------------------------\n");

  printf("Student Name : %s\n", student2.name);
  printf("Student RollNo : %d\n", student2.rollno);
  printf("Student Section : %c\n", student2.section);

  printf("\n\n------------------------------\n");

  printf("Student Name : %s\n", student3.name);
  printf("Student RollNo : %d\n", student3.rollno);
  printf("Student Section : %c\n", student3.section);

  return 0;
}
