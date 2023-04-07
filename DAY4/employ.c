#include <string.h>
#include <stdio.h>
struct employee
{
    int emp_id;
    char emp_name[10];
    char emp_designation[10];
    char emp_department[20];
    int emp_salary;
};
int main()
{
    int id;
    int salary;
    char nam[10];
    char desig[10];
    char dep[20];
    printf("Enter the Employee details :\n");
    printf("-------------------------------------------\n");
    printf("\nEnter Name: ");
    gets(nam);
    printf("Enter  Designation: ");
    gets(desig);
    printf("Enter  Department: ");
    gets(dep);
    printf("Enter Employee-Id : ");
    scanf("%d", &id);
    printf("Enter salaray : ");
    scanf("%d", &salary);
    printf("-------------------------------------------\n");
    printf("Employee details\n");
    printf("-------------------------------------------\n");
    struct employee hi;
    hi.emp_id = id;
    strcpy(hi.emp_name, nam);
    strcpy(hi.emp_designation, desig);
    strcpy(hi.emp_department, dep);
    strcpy(hi.emp_salary, salary);
    printf("Employee-ID: %d", hi.emp_id);
    printf("Name %s", hi.emp_name);
    printf("Designation: %s", hi.emp_designation);
    printf("Department: %s", hi.emp_department);
    printf("Salary: %d", hi.emp_salary);
}