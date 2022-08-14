#include<stdio.h>  
#include<string.h>   

// "address.h"

struct address{
    char door_num[5];
    char street[20];
    char pin[10];

};

typedef struct address Address;

void display_address(Address address){
    // Note that the 'Address' type already has access to the members of the structure
    printf("\nDoor No.%s, %s. PIN: %s\n", address.door_num, address.street, address.pin);    
}

// ---

struct employee{    
    int id;    
    char name[10];
    float salary;    
    Address address;
}; 

typedef struct employee Employee;


int main(){

    // int ids[10];
    // int names[10];

    Employee emp;

    printf("\nID:");    
    scanf("%d", &emp.id);    

    printf("Name:");    
    scanf("%s", emp.name); 

    printf("Salary:");    
    scanf("%f", &emp.salary); 

    // Address

    printf("Door #: ");    
    scanf("%s", emp.address.door_num); 

    printf("Street: ");    
    scanf("%s", emp.address.street); 

    printf("PIN: ");    
    scanf("%s", emp.address.pin); 


    printf("\n\nDisplaying Address");
    display_address(emp.address);
    
}