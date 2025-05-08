#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 100

typedef struct {
    int roll;
    char name[50];
    float marks;
} Student;

void addStudent(Student students[], int *count);
void listStudents(Student students[], int count);
void searchStudent(Student students[], int count, int roll);

#endif
