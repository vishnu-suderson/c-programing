#include <stdio.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student myStudent;
    
    printf("Enter student's name: ");
    fgets(myStudent.name, 50, stdin);

    printf("Enter student's GPA: ");
    scanf("%f", &myStudent.gpa);

    printf("Student's name: %s", myStudent.name);
    printf("Student's GPA: %.2f\n", myStudent.gpa);

    return 0;
}
