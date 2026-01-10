#include<stdio.h>
 


int main() {
    char ch;
    printf("Enter Character: ");
    scanf("%c", &ch);
    
    if(ch >= 'A'&& ch <= 'Z') {
        printf("upper case \n");
    }
    else if(ch >= 'a'&& ch <= 'z') {
        printf("lower case \n");
    }
    else {
        printf("not english letter \n");
    }


    
    return 0;

}