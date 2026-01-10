#include<stdio.h>

int main() {
    for(int i=1; 1<=5; i++) {
        if(i == 3) {
            break;
        }
        printf("%d", i);
    }
    printf("\nEnd");
}