#include<stdio.h>

int main()  {
    FILE *fptr;
    fptr = fopen("Test.txt",'w');

    fprintf(fptr, "%c", 'M');
   
    fclose(fptr);

    return 0;
}