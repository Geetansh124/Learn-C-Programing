#include<stdio.h>

int main () {
    int age = 22;
    int _age = 65;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %u Difference = %u", ptr-_ptr);
    _ptr = &age;
    
    printf("Comparsion = %u", ptr == _ptr);


}