#include <stdio.h>
#include <string.h>
#include "student.h"

void addStudent(Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Student limit reached!\n");
        return;
    }
    printf("Enter Roll Number: ");
    scanf("%d", &students[*count].roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[*count].name);  // Reads string with space
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
    printf("Student added successfully!\n");
}

void listStudents(Student students[], int count) {
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n",
               students[i].roll, students[i].name, students[i].marks);
    }
}

void searchStudent(Student students[], int count, int roll) {
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Student Found: %s - %.2f marks\n", students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student with roll %d not found.\n", roll);
}
