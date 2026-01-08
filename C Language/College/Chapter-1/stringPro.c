#include <stdio.h>
#include <conio.h>
#include <dos.h>

void revStr(char str[],int len){
    len--;
    for(;len>=0;len--){
        printf("%c",str[len]);
    }
}

int main() {
    char name[100];
    int ch,len=0;
    printf("Enter name -");
    scanf("%[^\n]",name);
    for(;name[len]!='\0';len++);
    do{
        system("cls");
        printf("Entered String - %s",name);
        printf("\n--------------");
        printf("\n** MENU **");
        printf("\n--------------");
        printf("\n1) Length");
        printf("\n1) Length With space");
        printf("\n2) Reverse the string");
        printf("\n3) Space_Length");
        printf("\n4) Exit");
        printf("\nEnter you choice -");
        scanf("%d",&ch);
        switch(choice) {
            case 1:
                lengthWithWithoutSpaces(str);
                break;
                
            case 2:
                reverseString(str);
                break;
                
            case 3:
                reverseWords(str);
                break;
                
            case 4:
                printf("\nNumber of words: %d\n", countWords(str));
                break;
                
            case 5:
                printf("\nNumber of vowels: %d\n", countVowels(str));
                break;
                
            case 6:
                printf("\nThank you for using the String Operations Menu!\n");
                printf("Goodbye!\n");
                return 0;
                
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 6.\n");
        
    }
    
    while(ch != 3);
    return 0;
}