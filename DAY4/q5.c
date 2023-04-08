#include<stdio.h>
#include<string.h>

struct employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i, highestSalaryIndex = 0;
    float highestSalary = 0.0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee emp[n];

    // Accepting details of employees
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i+1);
        printf("Enter Employee Number: ");
        scanf("%d", &emp[i].eno);
        printf("Enter Employee Name: ");
        scanf("%s", emp[i].ename);
        printf("Enter Employee Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Finding employee with highest salary
    for(i = 0; i < n; i++) {
        if(emp[i].salary > highestSalary) {
            highestSalary = emp[i].salary;
            highestSalaryIndex = i;
        }
    }

    // Displaying details of employee with highest salary
    printf("\nDetails of Employee with Highest Salary:\n");
    printf("Employee Number: %d\n", emp[highestSalaryIndex].eno);
    printf("Employee Name: %s\n", emp[highestSalaryIndex].ename);
    printf("Employee Salary: %.2f\n", emp[highestSalaryIndex].salary);

    return 0;
}
