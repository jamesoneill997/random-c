#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct employee{
        char name[20];
        int hireDate;
        double salary;
    };

    struct employee supportAgent = {"James", 2020, 20000.00};
    struct employee newEmployee;


    printf("Please enter your name:");
    scanf("%s", newEmployee.name);
    printf("Please enter your year of employment: ");
    scanf("%d", &newEmployee.hireDate);
    printf("Please enter your salary: ");
    scanf("%lf", &newEmployee.salary);

    
    printf("\n\n\n\n");

    printf("Name: %s\n, Date: %d\n, Salary: %.2f\n", supportAgent.name, supportAgent.hireDate, supportAgent.salary);
    printf("\n\n\n\n");
    printf("Name: %s\n, Date: %d\n, Salary: %.2f\n", newEmployee.name, newEmployee.hireDate, newEmployee.salary);
   
    return 0;
}


