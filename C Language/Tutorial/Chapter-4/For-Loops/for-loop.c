#include<stdio.h>

int main() {
    // (i= i+1) == i++ <-also use this also 
    for(int i=0; i<=10; i= i+1) {
        printf("%d \n", i);
        

    }
    return 0;
}