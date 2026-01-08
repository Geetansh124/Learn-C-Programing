#include<stdio.h>


struct Data {
    int num1;
    float num2;
};

int main() {
    
    struct Data d1, d2;

    
    d1.num1 = 10;
    d1.num2 = 33.5;
    d1.num2 = 33.5f; // Use 'f' suffix for float literals for type safety.
    d2.num1 = 2.45;
    d2.num2 = 0.0; 
    d2.num2 = 0.0f; // This is also a float literal.

    
    printf("d1: num1=%d, d1: num2=%.2f\n", d1.num1, d1.num2);
    printf("d2: num1=%d, d2: num2=%.2f\n", d2.num1, d2.num2);
    printf("d1: num1=%d, num2=%.2f\n", d1.num1, d1.num2);
    printf("d2: num1=%d, num2=%.2f\n", d2.num1, d2.num2);
    
    return 0;
}