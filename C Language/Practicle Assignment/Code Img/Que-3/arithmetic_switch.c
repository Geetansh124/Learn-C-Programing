#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Enter an expression (e.g., 5 * 3): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 1;

    switch (op) {
        case '+': printf("%g\n", a + b); break;
        case '-': printf("%g\n", a - b); break;
        case '*': printf("%g\n", a * b); break;
        case '/': b ? printf("%g\n", a / b) : fprintf(stderr, "Error: Division by zero.\n"); break;
        default: fprintf(stderr, "Error: Invalid operator '%c'.\n", op); break;
    }

    return 0;
}
