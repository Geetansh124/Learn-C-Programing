#include<stdio.h>

int main() {    
    for(int i=5; i<=50; i++) {
        if(i == 6) {
            continue;
        }
        printf("%d", i);
    }


    printf("Thank You");
}