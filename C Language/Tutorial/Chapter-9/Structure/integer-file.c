#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    int n;
    fscanf(fptr, "%d", n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d", n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d", n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d", n);
    printf("Number = %d\n", n);
    fscanf(fptr, "%d", n);
    printf("Number = %d\n", n);

    fclose(fptr);
    return 0;
}