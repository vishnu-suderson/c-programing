#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NAME 50

struct Student {
    char name[MAX_NAME];
    int roll_num;
    struct tm birthday;
    struct tm admission_date;
};

int main() {
    struct Student student;
    time_t now;
    struct tm *current_time;
    int age_years;
    
    // Accept information of student
    printf("Enter name of student: ");
    fgets(student.name, MAX_NAME, stdin);
    printf("Enter roll number of student: ");
    scanf("%d", &student.roll_num);
    printf("Enter date of birth of student (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &student.birthday.tm_mday, &student.birthday.tm_mon, &student.birthday.tm_year);
    printf("Enter date of admission of student (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &student.admission_date.tm_mday, &student.admission_date.tm_mon, &student.admission_date.tm_year);
    
    // Calculate age of student at the time of admission
    time(&now);
    current_time = localtime(&now);
    age_years = current_time->tm_year + 1900 - student.birthday.tm_year;
    if (current_time->tm_mon + 1 < student.birthday.tm_mon || 
        (current_time->tm_mon + 1 == student.birthday.tm_mon && current_time->tm_mday < student.birthday.tm_mday)) {
        age_years--;
    }
    printf("Age of student at the time of admission: %d years\n", age_years);
    
    return 0;
}
