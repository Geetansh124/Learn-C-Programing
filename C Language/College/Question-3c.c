#include <stdio.h>
int main () {
    int i, j, rows;
    printf("enter a num:");
    scanf("%d",&rows);
    for(int i = 0; i <= rows; i++){
    for(int j  = 0; j <= i; j++){
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}
    