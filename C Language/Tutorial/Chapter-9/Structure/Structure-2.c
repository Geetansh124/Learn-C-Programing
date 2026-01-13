#include <stdio.h>

struct Student {
    int roll;
    float cgpa;
    char name[100];
};


int main() {

    
    struct Student s2 = {23234, 9.5, "Ayush"};
    printf("Student Name : %s\n", s2.name);


    // Also Structure in pointers must learn


    // struct Student ece[100];
    // ece[0].roll = 1664;
    // ece[0].cgpa = 9.2;
    // strcpy(ece[0].name, "shradha");
    // printf("Student Name = %s\n", ece[0].name);
    // printf("Student Rollno. = %d\n", ece[0].roll);
    // printf("Student cgpa = %f\n", ece[0].cgpa);

    // struct Student s2 = {23234, 9.5, "Ayush"};
    // printf("Student Name : %s\n", s2.name);

    return 0;

}    