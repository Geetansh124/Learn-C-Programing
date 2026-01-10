#include<stdio.h>


void claculatePrice(float value); 

int main() {

    float value = 100.0;
    claculatePrice(value);
    printf("Value is: %f", value);
    return 0;
     
}

void claculatePrice(float value) {
    value = value + (0.18 * value);
    printf("Final price is: %f", value);
} 