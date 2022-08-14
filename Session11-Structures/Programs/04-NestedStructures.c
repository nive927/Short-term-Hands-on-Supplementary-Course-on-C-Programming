#include<stdio.h>  
#include<string.h>   


struct address{
    /* define an address structure with 
    - Door no (string)
    - Street (string)
    - Pin code (string)
    */
    char door_num[5];
    char street[10];
    char pin[10];
};

typedef struct address Address;


struct employee{    
    int id;    
    char name[10];
    float salary;    
    // use address here
    struct address addr;
}; 

typedef struct employee Employee;


int main(){

    Employee emp;

    printf("\nID:");    
    scanf("%d", &emp.id);    

    printf("Name:");    
    scanf("%s", emp.name); 

    printf("Salary:");    
    scanf("%f", &emp.salary); 

    // Address

    printf("Door #: ");    
    scanf("%s", emp.addr.door_num); 

    printf("Street: ");    
    scanf("%s", emp.addr.street); 

    printf("PIN: ");    
    scanf("%s", emp.addr.pin); 


    printf("\n\nDisplaying Address");
    printf("\nDoor #%s, %s. PIN: %s\n", emp.addr.door_num, emp.addr.street, emp.addr.pin);    
}