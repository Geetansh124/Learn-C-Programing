#include <stdio.h>

// int main() {

// int a = 10;
// int b = 20;
// int c = 0;
// int d = 0;

// a = b; // Assignment Operator
// b *= a;
// c = b += a;
// d =  a -= b = c;
// printf("a = %d \n", a);
// printf("b = %d \n", b);
// printf("c = %d \n", c);
// printf("d = %d \n", d);

// return 0;



int main () {
    int a = 23;
    int b = 43;
    int c = 64;
    int d = 84;
    int e = 62;
    int f = 98;
    int r = 1;

    r = a += b -= c *= d + e + f;

    printf("%d", r);

    return 0;
}
