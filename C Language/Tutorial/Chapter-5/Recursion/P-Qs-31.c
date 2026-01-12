#include<stdio.h>

int fact(int n);

int main() {
    printf("Factorial is: %d", fact(5));

    return 0;
}

int fact(int n) {
    printf("Calclate fact of n: %d\n", n);
    if(n == 0) {   
        return 1;
    }
    int factNm1 = fact(n-1); //sum of 1 to n 
    int factN = factNm1 * n;
    return factN;  
}