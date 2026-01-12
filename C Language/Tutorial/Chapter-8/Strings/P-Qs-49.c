#include<stdio.h>
#include<string.h>

void printStrings(char arr[]);
int contLength(char arr[]);


int main() {
    char name[] = "Geetansh";
    int length = strlen(name);
    printf("Length is : %d", strlen(name));
    return 0;    
}

int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] !='\0'; i++) {
        count++;
    }
    return count;
}

void printStrings(char arr[]) {
    for(int i=0; arr[i] != '\n'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}