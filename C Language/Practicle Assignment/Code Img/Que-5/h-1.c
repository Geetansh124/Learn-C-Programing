#include <stdio.h>

void drawPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int height = 5;
    drawPattern(height);
    return 0;
}
