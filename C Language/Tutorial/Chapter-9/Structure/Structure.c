#include <stdio.h>

struct Student {
    int roll;
    float cgpa;
    char name[100];
};


int main() {
    struct Student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "shradha");
    printf("Student Name = %s\n", s1.name);
    printf("Student Rollno. = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);

    struct Student s2;
    s2.roll = 1664;
    s2.cgpa = 9.8;
    strcpy(s2.name, "Geetansh");
    printf("Student Name = %s\n", s2.name);
    printf("Student Rollno. = %d\n", s2.roll);
    printf("Student cgpa = %f\n", s2.cgpa);

    struct Student s3;
    s3.roll = 1564;
    s3.cgpa = 8.8;
    strcpy(s3.name, "Karan");
    printf("Student Name = %s\n", s3.name);
    printf("Student Rollno. = %d\n", s3.roll);
    printf("Student cgpa = %f\n", s3.cgpa);
       
    return 0;
};
