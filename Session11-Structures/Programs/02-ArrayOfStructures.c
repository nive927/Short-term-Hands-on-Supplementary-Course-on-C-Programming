#include<stdio.h>  
#include<string.h>   
    
struct employee{    
    int id;  // 4  
    float salary; // 4    
    char name[8]; // 1 * 8
}; 

typedef struct employee Employee;


int main(){  

    printf("\nSize of the structure: %d\n", sizeof(Employee));  
    
    int i;    
    int N = 2;
    // int arr[] = {}
    Employee emp_records[N];    
    
    printf("\nEnter Records of %d Employees", N);    
    for(i=0;i<N;i++){  

        printf("\n\nEnter details for employee %d", i+1);

        printf("\nID:");    
        scanf("%d", &emp_records[i].id);    

        printf("Name:");    
        scanf("%s", emp_records[i].name); 

        printf("Salary:");    
        scanf("%f", &emp_records[i].salary);  
    } 

    printf("\n\nDisplaying Employee Information");    
    for(i=0;i<N;i++){    
        printf("\nID: %d\nName: %s\nSalary: %f\n", emp_records[i].id, emp_records[i].name, emp_records[i].salary);    
    }    

    return 0;    
}    