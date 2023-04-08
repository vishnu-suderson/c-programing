#include<stdio.h>
#include<string.h>

struct student {
   int roll_no;
   char stud_name[50];
   float mark1, mark2, mark3, total_marks, avg_marks;
};

int main() {
   struct student stud[10];
   int i, j, n;
   struct student temp;
   
   printf("Enter the number of students: ");
   scanf("%d", &n);
   
   for(i=0; i<n; i++) {
      printf("Enter roll number of student %d: ", i+1);
      scanf("%d", &stud[i].roll_no);
      printf("Enter name of student %d: ", i+1);
      scanf("%s", &stud[i].stud_name);
      printf("Enter marks of three subjects for student %d: ", i+1);
      scanf("%f%f%f", &stud[i].mark1, &stud[i].mark2, &stud[i].mark3);
      
      // Calculate total and average marks
      stud[i].total_marks = stud[i].mark1 + stud[i].mark2 + stud[i].mark3;
      stud[i].avg_marks = stud[i].total_marks / 3;
   }
   
   // Sort the records in descending order of total marks
   for(i=0; i<n-1; i++) {
      for(j=0; j<n-i-1; j++) {
         if(stud[j].total_marks < stud[j+1].total_marks) {
            temp = stud[j];
            stud[j] = stud[j+1];
            stud[j+1] = temp;
         }
      }
   }
   
   // Display the sorted records with total and average marks
   printf("\nRoll No\tName\t\tMark1\tMark2\tMark3\tTotal\tAvg\n");
   for(i=0; i<n; i++) {
      printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", stud[i].roll_no, stud[i].stud_name, stud[i].mark1, stud[i].mark2, stud[i].mark3, stud[i].total_marks, stud[i].avg_marks);
   }
   
   return 0;
}
