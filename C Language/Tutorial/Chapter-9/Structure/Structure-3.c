#include<stdio.h>

struct Student {
    int roll;
    float cgpa;
    char name[100];
};


void printInfo(struct Student s1);


int main() {
     struct Student s1 = {2324, 9.4, "Geetansh"};
    // printf("Student Rollno. = %d\n", s1.roll);
    
    // struct Student *ptr = &s1;
    // printf("Student Rollno. with ptr = %d\n", (*ptr).roll);
    // printf("Student-> = %d\n", ptr->roll);

    printInfo(s1);

    return 0;

}


void printInfo(struct Student s1) {
    printf("Student Information : \n");
    printf("Student Rollno. = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);
    printf("Student Name = %s\n", s1.name);
}