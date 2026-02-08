#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("G:\\Main\\C Lang\\C Language\\Tutorial\\Chapter-9\\Structure\\Structure.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name : ");
    scanf("%s\n", &name);

    printf("Enter age : ");
    scanf("%s\n", &age);

    printf("Enter cgpa : ");
    scanf("%s\n", &cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);

    fclose(fptr);
    return 0;
}