#include<stdio.h>
#include<stdlib.h>

#define NAME_SIZE 10

struct employee{    
    int id; // 4
    float salary;  // 4  
    char *name;    // sizeof(char*) -> 8
}; 

typedef struct employee Employee;


void main(){

    printf("\nSize of the structure: %d\n", sizeof(Employee));

    Employee emp;
    emp.name = (char*)malloc(sizeof(char)*NAME_SIZE);

    printf("\nID:");    
    scanf("%d", &emp.id);    

    printf("Name:");    
    scanf("%s", emp.name); 

    printf("Salary:");    
    scanf("%f", &emp.salary); 

    printf("\nID: %d\nName: %s\nSalary: %f\n", emp.id, emp.name, emp.salary);  

}